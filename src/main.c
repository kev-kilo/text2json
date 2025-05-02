//Parses args, calls editor_init(), runs the main loop, launches new terminal

#include <stdio.h>
#include "parser.h"
#include "IO_handler.h" 
 
int main(void) {
    char file_request[256]; 
    char txt_buffer[8192]; //adjust as needed depending on file size
    char json_buffer[8192]; //adjust as needed, depending on file size

    printf("enter path to desired .txt file: ");
    scanf("%255s", file_request); 
    read_file(file_request, txt_buffer); 
    

    return 0;
}