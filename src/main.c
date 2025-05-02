//Parses args, calls editor_init(), runs the main loop, launches new terminal

#include <stdio.h>
#include <stdlib.h> 
#include "parser.h"
#include "IO_handler.h" 
 
int main(int argc, char *argv[]) {
    char *file_request= argv[1]; 
    char *json_output= argv[2]; 
    char txt_buffer[8192]; //adjust as needed depending on file size
    char json_buffer[8192]; //adjust as needed, depending on file size

    // Check for correct number of arguments
    if (argc != 3) {
        printf("file request name is: %s\n,", file_request);

        fprintf(stderr, "\nImproper Usage. \nUsage: input.txt output.json\n");
        return 1;
    }
    printf("desired text file is: %s\n", file_request);
    printf("desired output file is: %s\n", json_output); 
    read_file(file_request, txt_buffer); 
    write_file(json_output, file_request); 
    

    return 0;
}