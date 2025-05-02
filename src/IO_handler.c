#include <stdio.h> 

void read_file(const char* txt_path, char* txt_buffer){
    printf("\nsearching for: %s...\n", txt_path);
    printf("Full path being checked: %s\n", txt_path);
    file_exists(txt_path); 


}
int write_file(const char* path, const char* content){
    return 0; 
}

int file_exists(const char* txt_path) {
    printf("checking if file exists...\n");
    FILE* file = fopen(txt_path, "r");
    if (file) {
        fclose(file);
        printf("File exists: %s\n", txt_path);
        return 1; // exists
    }
    printf("File not found: %s\n", txt_path);
    return 0; // does not exist
}