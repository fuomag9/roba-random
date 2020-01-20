//
// Created by fuomag9 on 28/12/2019.
//

#ifndef ESAME_ELEMENT_H
#define ESAME_ELEMENT_H


#include <string.h>

typedef struct {
    int id;
    char nome_ingresso[256];
    char nome_uscita[256];
} Evento;

typedef struct {
    char nome_ingresso[256];
    char nome_uscita[256];
    float costo;
} Tariffa;

int compare(Tariffa t1, Tariffa t2);

#endif //ESAME_ELEMENT_H
