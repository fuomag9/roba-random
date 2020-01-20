//
// Created by fuomag9 on 29/12/2019.
//

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "file_utils.h"


int get_file_size(FILE *fp) {
    int file_status = ftell(fp);
    fseek(fp, 0, SEEK_END);
    int lines = ftell(fp);
    fseek(fp, file_status, SEEK_SET);
    return lines;

}

int count_file_lines(FILE *fp) {
    int lines = 1;
    char c;
    int file_status = ftell(fp);

    fseek(fp, 0, SEEK_SET);
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            lines += 1;
    fseek(fp, file_status, SEEK_SET);
    return lines;

}

char *file_to_array(FILE *fp) {
    int file_status = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    int array_dim = get_file_size(fp);
    char *array_output = (char *) calloc(array_dim, sizeof(char));
    for (int i = 0; i <= array_dim; ++i) {
        array_output[i] = (char) fgetc(fp);
    }
    array_output[array_dim] = (char) 0;
    fseek(fp, file_status, SEEK_SET);
    return array_output;
}

int get_line_count(FILE *fp) {
    int file_status = ftell(fp);
    int lines_count = 1; //assuming file is not empty
    fseek(fp, 0, SEEK_SET);
    for (int i = 0; i < get_file_size(fp); ++i) {
        if (fgetc(fp) == '\n') {
            lines_count++;
        }
    }
    fseek(fp, file_status, SEEK_SET);
    return lines_count;
}

int get_line_size(FILE *fp, int line) {
    int output = 0;
    int file_status = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    int lines_count = 1;
    char c;
    for (int i = 0; i < get_file_size(fp); ++i) {
        c = fgetc(fp);
        if (c == '\n' || c == EOF) {
            if (lines_count == line) {
                break;
            } else {
                lines_count++;
                output = 0;
            }
        } else {
            output++;
        }
    }
    fseek(fp, file_status, SEEK_SET);
    return output;
}

void move_file_to_line(FILE *fp, int line) {
    fseek(fp, 0, SEEK_SET);
    int lines_count = 1;
    if (lines_count == line) {
        return;
    }
    for (int i = 0; i < get_file_size(fp); ++i) {
        if (fgetc(fp) == '\n') {
            if (lines_count + 1 == line) {
                break;
            } else {
                lines_count++;
            }
        }
    }
}

char *get_file_line(FILE *fp, int line) {
    int status = ftell(fp);
    char *c;
    char *output = (char *) calloc(get_line_size(fp, line) + 1, sizeof(char));
    move_file_to_line(fp, line);

    for (int i = 0; i <= get_line_size(fp, line); ++i) {
        c = (char *) fgetc(fp);
        if ((int) c == '\n' || (int) c == EOF) {
            output[i] = (char) 0;
            fseek(fp, status, SEEK_SET);
            return output;

        } else {
            output[i] = (char) c;
        }
    }

    return NULL;
}

FILE *open_file(char* file, char* mode) {
    FILE *fp = fopen(file, mode);
    if (fp == NULL) {
        exit(1);
    } else {
        return fp;
    }
}


FILE *open_file_read(char* file) {
    return open_file(file, "r");
}

FILE *open_file_write(char* file) {
    return open_file(file, "w");
}

FILE *open_file_append(char* file) {
    return open_file(file, "a");
}



