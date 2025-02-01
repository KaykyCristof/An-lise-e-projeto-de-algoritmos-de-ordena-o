#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "diretorio.h"

void troca( int *vetor, int i, int j ) {
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

int particiona( int *vetor, int inicio, int fim ) {
	int pivo, pivo_indice, i;
	
	pivo = vetor[fim]; 
	pivo_indice = inicio;
	
	for( i = inicio; i < fim; i++ ) {
		if( vetor[i] <= pivo ) {
		
			troca( vetor, i, pivo_indice );
			pivo_indice++;
		}
	}
	
	troca( vetor, pivo_indice, fim );
	
	return pivo_indice;
}

int particiona_primeiro( int *vetor, int inicio, int fim ) {
    int pivo_indice = inicio; 
    
    troca( vetor, pivo_indice, fim ); 
    
    return particiona( vetor, inicio, fim ); 
}

int particiona_random( int *vetor, int inicio, int fim ) {
	int pivo_indice = ( rand() % ( fim - inicio + 1 ) ) + inicio;
	
	troca( vetor, pivo_indice, fim );
	
	return particiona( vetor, inicio, fim) ;
}

int particiona_media( int *vetor, int inicio, int fim ) {
    double soma = 0;
    int tamanho = fim - inicio + 1;
	int i;
	
    for ( i = inicio; i <= fim; i++ ) {
        soma += vetor[i];
    }

    double media = soma / tamanho;

    int pivo_indice = inicio;
    double menor_diferenca = fabs( vetor[inicio] - media );

    for ( i = inicio + 1; i <= fim; i++ ) {
        double diferenca = fabs( vetor[i] - media );
        if ( diferenca < menor_diferenca ) {
            menor_diferenca = diferenca;
            pivo_indice = i;
        }
    }

    troca( vetor, pivo_indice, fim );

    return particiona( vetor, inicio, fim );
}


double quickSort( int *vetor, int inicio, int fim, int escolha_Pivo ) {
    double tempo;
    clock_t StartC, EndC;
    StartC = clock();

    if ( inicio < fim ) {
        int pivo_indice;

        switch ( escolha_Pivo ) {
            case 1:
                pivo_indice = particiona_primeiro( vetor, inicio, fim );
                break;
            case 2:
                pivo_indice = particiona_media( vetor, inicio, fim );
                break;
            case 3:
                pivo_indice = particiona_random( vetor, inicio, fim) ;
                break;
        }

        quickSort( vetor, inicio, pivo_indice - 1, escolha_Pivo );
        quickSort( vetor, pivo_indice + 1, fim, escolha_Pivo );
    }

    EndC = clock();
    tempo = ( EndC - StartC ) / ( double )CLOCKS_PER_SEC;
    return tempo;
}

#endif
