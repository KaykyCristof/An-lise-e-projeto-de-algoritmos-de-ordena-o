#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
#include "diretorio.h"

double selectionSort( int *vetor, int tam ) {
	double tempo;
    clock_t StartC, EndC;
    StartC = clock();
	
	int i;
	int j;
	int chave;
	int minIndex;
		
    for ( i = 0; i < tam - 1; i++ ) {
        minIndex = i;
        for ( j = i + 1; j < tam; j++ ) {
            if ( vetor[j] < vetor[minIndex] ) {
                minIndex = j;
            }
        }
        chave = vetor[i];
        vetor[i] = vetor[minIndex];
        vetor[minIndex] = chave;
    }
    
    EndC = clock();
	tempo = (EndC - StartC) / (double)CLOCKS_PER_SEC;
	printf( "\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo );
	return tempo;
}

#endif
