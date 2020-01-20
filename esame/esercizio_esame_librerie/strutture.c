//
// Created by fuomag9 on 01/01/2020.
//

#include "string.h"
#include <stdio.h>
#include "../list_3.h"
#include "../file_utils.h"
#include "../element.h"

Evento leggiUno(FILE *fp) {
    Evento evento_return;
    char temp[514];
    int result_fscanf = fscanf(fp, "%d %s", &evento_return.id, temp);
    char *out =strstr(temp,"@");

    if (result_fscanf == 2 && (out!=NULL)) {
        strcpy(evento_return.nome_ingresso,strtok(temp, "@"));
        strcpy(evento_return.nome_uscita,strtok(NULL, "@"));

    } else {
        evento_return.id = -1;
    }
    return evento_return;

}

/*list leggiTutti(char * fileName){
    list a = emptylist();
    FILE * fp=fopen(fileName,"r");
    for (int i = 1; i <= count_file_lines(fp); ++i) {
        printf("%s",get_file_line(fp,i));
    }
    if (fp==NULL){
        printf("Errore\n");
        fclose(fp);
        return emptylist();
    }
    int line_numbers= count_file_lines(fp);
    Evento evento_temp;
    for (int i = 0; i < line_numbers; ++i) {
        evento_temp=leggiUno(fp);
        if (evento_temp.id==-1){
            printf("Errore\n");
            fclose(fp);
            return emptylist();
        }
        cons(evento_temp,a);
    }
    fclose(fp);
    return a;
}*/
