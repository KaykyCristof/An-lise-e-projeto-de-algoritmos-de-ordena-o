#ifndef HEAPSORT_H
#define HEAPSORT_H
#include "diretorio.h"

void swap( int *a, int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Construção de um HEAP MÍNIMO( Utilizado em filas de prioridades )
void MIN_HEAPIFY( int *vetor, int tam, int i ) {
    int menor = i;             
    int esquerdo = 2 * i + 1;   
    int direito = 2 * i + 2;    

    if ( esquerdo < tam && vetor[esquerdo] < vetor[menor] ) {
        menor = esquerdo;
    }

    if ( direito < tam && vetor[direito] < vetor[menor] ) {
        menor = direito;
    }

    if ( menor != i ) {
        swap( &vetor[i], &vetor[menor] );
        MIN_HEAPIFY( vetor, tam, menor );
    }
}

void BUILD_MIN_HEAP( int *vetor, int tam ) {
	int i;
	
    for ( i = tam / 2 - 1; i >= 0; i-- ) {
        MIN_HEAPIFY(vetor, tam, i);
    }
}

// Construção de um HEAP MÁXIMO
void MAX_HEAPIFY( int *vetor, int tam, int i ) {
    int maior = i;       
    int esquerdo = 2 * i + 1; 
    int direito = 2 * i + 2; 

    if ( esquerdo < tam && vetor[esquerdo] > vetor[maior] ) {
        maior = esquerdo;
    }

    if ( direito < tam && vetor[direito] > vetor[maior] ) {
        maior = direito;
    }

    if ( maior != i ) {
        swap( &vetor[i], &vetor[maior] );

        MAX_HEAPIFY( vetor, tam, maior );
    }
}

void BUILD_MAX_HEAP( int *vetor, int tam ) {
    int i;
    for ( i = tam / 2 - 1; i >= 0; i-- ) {
        MAX_HEAPIFY( vetor, tam, i );
    }
}

double heapSort( int *vetor, int tam, int tipoHeap ) {
    double tempo;
    clock_t inicio, fim;
    inicio = clock();
    
    int i;
    
    switch( tipoHeap ) {
    	case 0:
    	{
    		BUILD_MAX_HEAP(vetor, tam);

    		for ( i = tam - 1; i >= 0; i-- ) {
        		swap( &vetor[0], &vetor[i] );

        		MAX_HEAPIFY(vetor, i, 0);
    		}
    		
    		break;
		}
		case 1:
		{
			BUILD_MIN_HEAP( vetor, tam );
	
    		for ( i = tam - 1; i >= 0; i-- ) {
        		swap( &vetor[0], &vetor[i] );
        		MIN_HEAPIFY( vetor, i, 0 );
   			}
			break;
		}
	}
    
    fim = clock();
    tempo = (fim - inicio) / (double)CLOCKS_PER_SEC;
    //printf("\t---Tempo gasto para ordenar elementos do vetor: %f---\t\n", tempo);
    return tempo;
}

// Filas de prioridades 

// Remove e retorna o menor elemento do heap
int HEAP_EXTRACT_MIN( int *vetor, int *tam ) {
	int i;
	
    if ( *tam < 1 ) {
        printf( "Erro! O heap esta vazio!\n" );
        exit(1);
    }

    int min = vetor[0];
    vetor[0] = vetor[ *tam - 1 ];
    ( *tam )--;

    MIN_HEAPIFY( vetor, *tam, 0 );

    return min;
}

// Função para inserir o elemento na posição
void HEAP_INCREASE_KEY( int *vetor, int tam, int posicao ) {
    if ( posicao < 0 || posicao >= tam ) {
        printf( "Posicao invalida!\n" );
        exit(1);
    }

    vetor[posicao] = 1000;
}

// Função para inserir o elemento 1000 sem sobrescrever o valor existente
void MAX_HEAP_INSERT( int **vetor, int *tam, int posicao ) {
	
	int i;
	int *temp = NULL;
	
	( *tam )++;

    temp = ( int * )realloc( *vetor, ( *tam ) * sizeof( int ) );
    
    if ( temp == NULL ) {
        printf("Erro ao realocar memória!\n");
        exit(1);
    }

    *vetor = temp;

    for (  i = *tam - 2; i >= posicao; i-- ) {
        ( *vetor )[ i + 1 ] = ( *vetor) [i];
    }

	HEAP_INCREASE_KEY( *vetor, *tam, posicao );	 
}

// Função para construir o heap mínimo e depois inserir o valor 1000
void BUILD_MIN_HEAP_AND_INSERT( int **vetor, int *tam ) {
	int *temp = NULL;
	
    ( *tam )++;
    
    temp = ( int * )realloc( *vetor, ( *tam ) * sizeof( int ) );
    if ( temp == NULL ) {
        printf("Erro ao realocar memória!\n");
        exit(1);
    }
    
	*vetor = temp;

    HEAP_INCREASE_KEY(*vetor, *tam, *tam - 1);
}

#endif

