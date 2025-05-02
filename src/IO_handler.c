#include <stdio.h> 
#include "IO_handler.h"
#include "parser.h"

void read_file(const char* txt_path, char* txt_buffer){
    printf("\nsearching for: %s...\n", txt_path);
    printf("path being checked: %s\n", txt_path);
    check_file(txt_path); 
    

}
void write_file(const char* json_name, const char* txt_input) {
    FILE *input_txt = fopen(txt_input, "r"); //opens input .txt file for reading
    if (!input_txt) {
        perror("Failed to open input file");
        return;
    }
    
    if (check_file(json_name) == 1) {
        printf("\nWarning: Output file %s already exists. It will be overwritten.\n", json_name);
        // Ask for user confirmation if needed
    } else {
        printf("Creating new output file: %s\n", json_name);
    }

    FILE *output_file = fopen(json_name, "w"); // open file only after checking
    if (!output_file) {
        perror("Failed to open file for writing");
        return;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), input_txt)) {
        fputs(buffer, output_file);
    }

    

    // write content to file, e.g.:
    fclose(output_file);
    fclose(input_txt); 
    printf("\noutput file has been created :)\n"); 
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