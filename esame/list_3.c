
//
// Created by fuomag9 on 28/12/2019.
//


// LIST IMPLEMENTATION - file list.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list_3.h"


// OPERAZIONI PRIMITIVE
list emptylist(void)
// costruttore lista vuota
{ return NULL; }

boolean empty(list l)
// verifica se lista vuota
{ return (l == NULL); }

list cons(int e, list l) {
    list t;
// costruttore che aggiunge in testa alla lista
    t = (list) malloc(sizeof(item));
    t->value = e;
    t->next = l;
    return (t);
}

int head(list l)
// selettore testa lista
{ if (empty(l)) exit(-2); else return (l->value); }

list tail(list l)
// selettore coda lista
{ if (empty(l)) exit(-1); else return (l->next); }


// void showlist(list l) {
//    int temp;
//    if (!empty(l)) {
//        temp = head(l);
//        printf("%d: %s ---TO--- %s\n", temp.id, temp.ingresso, temp.uscita);
//        showlist(tail(l));
//        return;
//    }
//    else {
//        printf("\n\n");
//        return;
//    }
//}


//int member(int el, list l) {
//    int result = 0;
//    while (!empty(l) && !result) {
//        result = (el.id == head(l).id);
//        if (!result) l = tail(l);
//    }
//    return result;
//}


void freelist(list l) {
    if (empty(l)) return;
    else {
        freelist(tail(l));
        free(l);
    }
    return;
}