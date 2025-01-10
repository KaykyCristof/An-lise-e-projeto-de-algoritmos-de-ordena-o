#ifndef HEAPSORT_H
#define HEAPSORT_H
#include "diretorio.h"

void subirHeap( int *vetor, int tam, int i ) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
    int temp;

    if ( esquerda < tam && vetor[esquerda] > vetor[maior] ) {
        maior = esquerda;
    }

    if ( direita < tam && vetor[direita] > vetor[maior] ) {
        maior = direita;
    }

    if ( maior != i ) {
        temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;
        subirHeap( vetor, tam, maior );
    }
}

double heapSort( int *vetor, int tam ) {
	double tempo;
    clock_t StartC, EndC;
    StartC = clock();
    
    int i;
    int temp;

    for ( i = tam / 2 - 1; i >= 0; i-- ) {
        subirHeap( vetor, tam, i );
    }

    for ( i = tam - 1; i > 0; i-- ) {
        temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        subirHeap( vetor, i, 0 );
    }
    
    EndC = clock();
	tempo = ( EndC - StartC ) / ( double )CLOCKS_PER_SEC;
	//printf( "\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo );
	return tempo;
}

#endif
