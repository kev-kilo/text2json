#ifndef IO_HANDLER_H
#define IO_HANDLER_H

int read_file(const char* path, char* buffer);
int write_file(const char* path, const char* content);
int check_file(const char* txt_path); 

#endif
