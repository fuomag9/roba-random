
//
// Created by fuomag9 on 28/12/2019.
//

#ifndef ESAME_LIST_H
#define ESAME_LIST_H

#include "element.h"

typedef struct list_element {
    int value;
    struct list_element *next;
} item;



typedef item *list;
typedef int boolean;
//PRIMITIVE

list emptylist(void);

boolean empty(list);

list cons(int e, list);

int head(list);

list tail(list);

void showlist(list l);

void freelist(list l);

int member(int el, list l);

#endif //ESAME_LIST_H

