#ifndef VETOR_H
#define VETOR_H
#include "diretorio.h"
#define TAM 1000000

// Função para alocar memória dinamicamente para o vetor.
int *aloca_Memoria( int **vetor, int tam ) {
	*vetor = ( int* ) malloc( tam * sizeof( tam ) );
	if( *vetor != NULL ) {
		//printf( "Memoria alocada com sucesso.\n" );
		return *vetor;
	} else {
		//printf( "Erro ao alocar memoria.\n" );
		return NULL;
	}
}

// Função que insere dados no arquivo.
void insere_Dados( FILE *pontArq, int tam, char tipo_Arquivo, double tempo, int *vetor ) {
	int i;
	
	if ( tipo_Arquivo == 'c' ) {
		for( i = 0; i < tam; i++ ) {
			fprintf( pontArq, "%d\n", i );
		}
	}
	
	if( tipo_Arquivo =='d' ) {
		for( i = tam; i > 0; i-- ) {
			fprintf( pontArq, "%d\n", i );
		}
	}
	if( tipo_Arquivo == 'r' ) {
		int aleatorio = 0;
		int temp = 0;
		
		srand( time( NULL ) );
		for( i = 0; i < tam; i++ ) {
			aleatorio = rand() % TAM;
			
			fprintf( pontArq, "%d\n", aleatorio );
		}	
	}
	
	if( tipo_Arquivo == 't' ) {
		fprintf( pontArq, "%f\n", tempo );
	}
	
	if( tipo_Arquivo == 's' ) {
		for( i = 0; i < tam; i++ ) {
			fprintf( pontArq, "%d\n", vetor[i] );
		}
	}
	
	//printf( "Sucesso ao inserir dados no arquivo.\n" );
}

// Função que lê dados do arquivo e salva no vetor.
void le_Dados( FILE *pontArq, int tam, int *vetor ) {
	int i;
	
		for( i = 0; i < tam; i++ ) {
			fscanf( pontArq, "%d\n", &vetor[i] );
		}	
	
	//printf( "Sucesso ao ler dados do arquivo.\n" );
}

void imprime_Vetor( int *vetor, int tam ) {
	int i;
	
	printf( "Vetor:" );
	for( i = 0; i < tam; i++ ) {
		printf( "%d ", vetor[i] );
	}
	printf( "\n" );
}

#endif
