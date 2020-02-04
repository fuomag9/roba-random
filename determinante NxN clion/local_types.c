//
// Created by fuomag9 on 04/12/2019.
//

#include <corecrt_wstdio.h>
#include <corecrt_malloc.h>
#include "local_types.h"
#include "string.h"
#include <stdio.h>
#include <math.h>

void scrivi_spese(char* file_name){

    FILE *fp=NULL;


    int input_int;
    char* input[1024];
    float input_float;

    printf("Inserisci matricola");
    scanf("%d",input_int);
    char* input_int_s = malloc((int)((ceil(log10(input_int))+1)*sizeof(char)+4* sizeof(char)));
    strcat(input_int_s,".txt");
    fp = fopen(input_int_s,"r");
    if (fp==NULL){
        exit(1);
    }

    do{
        scanf("%d %s",&input_int, input);
        if(input_int!=-1){
            fprintf(fp,"%d %s",input_int,input);
        }
    }
    while (input_int!=-1);
    file_name=malloc(sizeof(input_int_s));
    strcat(file_name,input_int_s);
    free(input_int_s);




    printf("tipo, importo");
}