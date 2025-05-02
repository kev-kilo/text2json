#include <stdio.h> 
#include "IO_handler.h"
#include "parser.h"

int read_file(const char* txt_path, char* txt_buffer){
    printf("\nsearching for: %s...\n", txt_path);
    printf("path being checked: %s\n", txt_path);
    check_file(txt_path); 
    write_file(txt_path); 
    return 0; 


}
int write_file(const char* txt_path, const char* content){
    //takes file after it is checked for existence
    // parses file
    //outputs json
    return 0; 
}

int check_file(const char* txt_path) {
    printf("checking if file exists...\n");
    FILE* file = fopen(txt_path, "r");
    if (file) {
        fclose(file);
        printf("%s exists...\n", txt_path);
        return 1; // exists
    }
    printf("File not found: %s\n", txt_path);
    return 0; // does not exist
}