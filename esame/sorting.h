//
// Created by fuomag9 on 29/12/2019.
//

#ifndef ESAME_SORTING_H
#define ESAME_SORTING_H

void scambia(int *a, int *b);

int trovaPosMax(int v[], int array_dim);

void insOrd(int v[], int pos);

void merge(int v[], int i1, int i2, int fine, int array_output[]);

void quickSortR(int a[], int iniz, int fine);

void naiveSort(int v[], int array_dim);

void bubbleSort(int v[], int array_dim);

void insertSort(int v[], int array_dim);

void mergeSort(int v[], int first, int last, int array_output[]);

void quickSort(int a[], int array_dim);


#endif //ESAME_SORTING_H

