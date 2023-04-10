#ifndef MAIN_h
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
