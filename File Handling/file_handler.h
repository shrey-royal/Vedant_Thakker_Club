#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_DATA_LENGTH 100

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char data[MAX_DATA_LENGTH];
} Record;

FILE* openFile(const char* filename, const char* mode);
int addRecord(FILE* file, const Record* record);
int updateRecord(FILE* file, int id, const Record* record);
int deleteRecord(FILE* file, int id);
Record* getRecord(FILE* file, int id);
void printRecord(const Record* record);
void closeFile(FILE* file);

#endif /* FILE_HANDLER_H */
