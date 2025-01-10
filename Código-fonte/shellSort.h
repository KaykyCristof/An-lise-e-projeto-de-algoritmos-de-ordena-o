#ifndef SHELLSORT_H
#define SHELLSORT_H
#include "diretorio.h"

double shellSort( int *vetor, int tam ) {
	double tempo;
    clock_t StartC, EndC;
    StartC = clock();
	
	int i;
	int j;
    int gap;
    int chave;
    
    for ( gap = tam / 2; gap > 0; gap /= 2 ) {
        for ( i = gap; i < tam; i++ ) {
            chave = vetor[i];
            for ( j = i; j >= gap && vetor[j - gap] > chave; j -= gap ) {
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = chave;
        }
    }
    
    EndC = clock();
	tempo = (EndC - StartC) / (double)CLOCKS_PER_SEC;
	printf( "\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo );
	return tempo;
}

#endif
