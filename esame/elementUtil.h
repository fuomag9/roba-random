//
// Created by fuomag9 on 28/12/2019.
//

#ifndef ESAME_ELEMENTUTIL_H
#define ESAME_ELEMENTUTIL_H

#include <stdio.h>
#include "element.h"
#include "esercizio_esame_librerie/strutture.h"

#define READ_FAILED 0
#define READ_SUCCESS 1
typedef int READ_CODE;

void printElement(Evento el);

int compareElement(Evento el1, Evento el2);

READ_CODE readElementFromFile(FILE *fp, Evento *dest);

int equals(Evento el1, Evento el2);

#endif //ESAME_ELEMENTUTIL_H
