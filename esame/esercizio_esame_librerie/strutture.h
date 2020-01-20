//
// Created by fuomag9 on 01/01/2020.
//

#ifndef ESAME_STRUTTURE_H
#define ESAME_STRUTTURE_H

#include <corecrt_wstdio.h>
#include "../list_3.h"
#include "../element.h"



Evento leggiUno(FILE * fp);
//list leggiTutti(char * fileName);
Tariffa * leggiTariffe(char * fileName, int * dim);



#endif //ESAME_STRUTTURE_H
