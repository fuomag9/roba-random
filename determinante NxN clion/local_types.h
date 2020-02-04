//
// Created by fuomag9 on 04/12/2019.
//

#ifndef DETERMINANTE_NXN_CLION_LOCAL_TYPES_H
#define DETERMINANTE_NXN_CLION_LOCAL_TYPES_H

#endif //DETERMINANTE_NXN_CLION_LOCAL_TYPES_H

struct Spesa{
int id;
    char* tipo[1024];
    float importo;
};

typedef struct Spesa Spesa;

void scrivi_spese(char* file_name);