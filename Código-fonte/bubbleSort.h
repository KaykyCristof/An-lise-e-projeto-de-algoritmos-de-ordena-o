#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "diretorio.h"

double bubble_Sort( int *vetor, int tam ) {
	double tempo;
    clock_t StartC, EndC;
    StartC = clock();
	
	int i;
	int j;
	int chave;
    
	for ( i = 0; i < tam - 1; i++ ) {
        for ( j = 0; j < tam - i - 1; j++ ) {
            if ( vetor[j] > vetor[j + 1] ) {
                chave = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = chave;
            }
        }
    }
   
    EndC = clock();
	tempo = (EndC - StartC) / (double)CLOCKS_PER_SEC;
	printf( "\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo );
	return tempo;
}

#endif

