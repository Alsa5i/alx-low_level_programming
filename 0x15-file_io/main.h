#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif
