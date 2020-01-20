//
// Created by fuomag9 on 29/12/2019.
//

#include "sorting.h"

//region funzioni speicifiche per gli ordinamenti

void scambia(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int trovaPosMax(int v[], int array_dim) {
    int i, posMax = 0;
    for (i = 1; i < array_dim; i++)if (v[posMax] < v[i]) posMax = i;
    return posMax;
}

void insOrd(int v[], int pos) {
    int i = pos - 1, x = v[pos];
    while (i >= 0 && x < v[i]) {
        v[i + 1] = v[i];
        i--;
    }
    v[i + 1] = x;
}

void merge(int v[], int i1, int i2, int fine, int array_output[]) {
    int i = i1, j = i2, k = i1;
    while (i <= i2 - 1 && j <= fine) {
        if (v[i] < v[j]) //condizione -> compare(v[i], v[j])<0)
            array_output[k] = v[i++];
        else
            array_output[k] = v[j++];
        k++;
    }
    while (i <= i2 - 1) {
        array_output[k] = v[i++];
        k++;
    }
    while (j <= fine) {
        array_output[k] = v[j++];
        k++;
    }
    for (i = i1; i <= fine; i++) v[i] = array_output[i];
}

void quickSortR(int a[], int iniz, int fine) {
    int i, j, iPivot, pivot;
    if (iniz < fine) {
        i = iniz;
        j = fine;
        iPivot = fine;
        pivot = a[iPivot];
        do  /* trova la posizione del pivot */{
            while (i < j && a[i] <= pivot) i++; // while (i < j && compare(a[i], pivot)<=0) i++;
            while (j > i && a[j] >= pivot) j--; // while (j > i && compare(a[j], pivot)>=0) j--;
            if (i < j) scambia(&a[i], &a[j]);
        } while (i < j);
        /* determinati i due sottoinsiemi *//* posiziona il pivot */
        if (i != iPivot && a[i] != a[iPivot]) { // if (i != iPivot && compare(a[i], a[iPivot])
            scambia(&a[i], &a[iPivot]);
            iPivot = i;
        }
        /* ricorsione sulle sottoparti, se necessario */
        if (iniz < iPivot - 1) quickSortR(a, iniz, iPivot - 1);
        if (iPivot + 1 < fine) quickSortR(a, iPivot + 1, fine);
    } /* (iniz < fine) */
}

//endregion

//region sorting

void naiveSort(int v[], int array_dim) {
    int p;
    while (array_dim > 1) {
        p = trovaPosMax(v, array_dim);
        if (p < array_dim - 1) scambia(&v[p], &v[array_dim - 1]);
        array_dim--;
    }
}

void bubbleSort(int v[], int array_dim) {
    int i, ordinato = 0;
    while (array_dim > 1 && !ordinato) {
        ordinato = 1;
        for (i = 0; i < array_dim - 1; i++)
            if (v[i] > v[i + 1]) {
                scambia(&v[i], &v[i + 1]);
                ordinato = 0;
            }
        array_dim--;
    }
}

void insertSort(int v[], int array_dim) {
    int k;
    for (k = 1; k < array_dim; k++)
        insOrd(v, k);

}

void mergeSort(int v[], int first, int last, int array_output[]) {
    int mid;
    if (first < last) {
        mid = (last + first) / 2;
        mergeSort(v, first, mid, array_output);
        mergeSort(v, mid + 1, last, array_output);
        merge(v, first, mid + 1, last, array_output);
    }
}

void quickSort(int a[], int array_dim) {
    quickSortR(a, 0, array_dim - 1);
}

//endregion

//region compare_esami


//compare quick sort

//int compare(Tariffa t1, Tariffa t2) {
//    int result;
//    result = strcmp(t1.ingresso, t2.ingresso);
//    if (result == 0) result = strcmp(t1.uscita, t2.uscita);
//    if (result == 0) { if (t1.costo < t2.costo) result = -1; else if (t1.costo > t2.costo) result = 1; }
//    return result;
//}




//compare merge sort

//int compare(Pasto p1, Pasto p2) {
//    int result;
//    result = p1.id - p2.id;
//    if (result == 0) result = p1.primi - p2.primi;
//    if (result == 0) result = p1.secondi - p2.secondi;
//    if (result == 0) result = p1.dolci - p2.dolci;
//    return result;
//}




//endregion