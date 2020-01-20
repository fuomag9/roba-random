//
// Created by fuomag9 on 29/12/2019.
//

#include <corecrt_wstdio.h>
#include "generalUtil.h"

#ifndef ESAME_FILE_UTILS_H
#define ESAME_FILE_UTILS_H

int count_file_lines(FILE *fp);

int get_file_size(FILE *fp);

char *file_to_array(FILE *fp);

char *get_file_line(FILE *fp, int line);

int get_line_size(FILE *fp, int line);

void move_file_to_line(FILE *fp, int line);

int get_line_count(FILE *fp);

FILE *open_file(char* file, char* mode);

FILE *open_file_read(char* file);

FILE *open_file_write(char* file);

FILE *open_file_append(char* file);


#endif //ESAME_FILE_UTILS_H
