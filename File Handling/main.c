#include <stdio.h>
#include <stdlib.h>
#include "file_handler.c"

int main() {
    FILE* file = openFile("records.dat", "wb+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    Record record1 = {1, "Record One", "Data 1"};
    Record record2 = {2, "Record Two", "Data 2"};

    addRecord(file, &record1);
    addRecord(file, &record2);

    Record* retrieved_record = getRecord(file, 0);
    if (retrieved_record != NULL) {
        printRecord(retrieved_record);
        free(retrieved_record);
    }

    Record updated_record = {1, "Updated Record", "Updated Data"};
    updateRecord(file, 0, &updated_record);

    retrieved_record = getRecord(file, 0);
    if (retrieved_record != NULL) {
        printRecord(retrieved_record);
        free(retrieved_record);
    }

    deleteRecord(file, 0);

    retrieved_record = getRecord(file, 0);
    if (retrieved_record == NULL) {
        printf("Record deleted.\n");
    } else {
        free(retrieved_record);
    }

    closeFile(file);
    return 0;
}
