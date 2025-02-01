#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "diretorio.h"

// Algoritmo insertion sort.
double insertion_Sort( int *vetor, int tam ) {
	double tempo;
    clock_t StartC, EndC;
    StartC = clock();

	int i;
	int j;
	int chave;
	
	for( i = 1; i < tam; i++ ) {
		
		chave = vetor[i];
	
		j = i - 1;
	
		while( j >= 0 && vetor[j] > chave ) {
			vetor[j+1] = vetor[j];
			j = j - 1;
		}
		vetor[j+1] = chave;
	}
	EndC = clock();
	tempo = (EndC - StartC) / (double)CLOCKS_PER_SEC;
	printf( "\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo );
	return tempo;
}

#endif
