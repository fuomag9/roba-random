//
// Created by fuomag9 on 28/12/2019.
//

#include <stdlib.h>

char *char_to_string(char input) {
    char *string = (char *) calloc(2, sizeof(char));
    string[0] = input;
    string[1] = (char) 0;
    return string;
}