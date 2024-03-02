#include "file_handler.h"

FILE* openFile(const char* filename, const char* mode) {
    return fopen(filename, mode);
}

int addRecord(FILE* file, const Record* record) {
    if (fprintf(file, "%d %s %s\n", record->id, record->name, record->data) < 0)
        return 0;
    return 1;
}

int updateRecord(FILE* file, int id, const Record* record) {
    fseek(file, id * sizeof(Record), SEEK_SET);
    if (fprintf(file, "%d %s %s\n", record->id, record->name, record->data) < 0)
        return 0;
    return 1;
}

int deleteRecord(FILE* file, int id) {
    Record empty_record = {0, "", ""};
    fseek(file, id * sizeof(Record), SEEK_SET);
    if (fprintf(file, "%d %s %s\n", empty_record.id, empty_record.name, empty_record.data) < 0)
        return 0;
    return 1;
}

Record* getRecord(FILE* file, int id) {
    Record* record = (Record*)malloc(sizeof(Record));
    fseek(file, id * sizeof(Record), SEEK_SET);
    if (fscanf(file, "%d %s %s\n", &(record->id), record->name, record->data) != 3) {
        free(record);
        return NULL;
    }
    return record;
}

void printRecord(const Record* record) {
    printf("ID: %d\nName: %s\nData: %s\n", record->id, record->name, record->data);
}

void closeFile(FILE* file) {
    fclose(file);
}
