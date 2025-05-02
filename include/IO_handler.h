#ifndef IO_HANDLER_H
#define IO_HANDLER_H

int check_file(const char* txt_path); 
void read_file(const char* txt_path, char* txt_buffer);
void write_file(const char* txt_path, const char* content);


#endif
