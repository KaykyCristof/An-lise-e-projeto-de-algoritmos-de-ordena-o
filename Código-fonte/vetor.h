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

// Função que insere dados em um vetor, ( exclusivo para o HEAP SORT )

void insere_Vetor( int *vetor, int tam, char tipoEntrada ) {
	int i;
	
	switch( tipoEntrada ) {
		case 'c':
		{
			for( i = 0; i < tam; i++ ) {
				vetor[i] = i;
			}
			break;
		}
		case 'd':
		{
			int aux = tam;
			for( i = 0; i < tam; i++ ) {
				vetor[i] = aux;
				aux--;
			}
			break;
		}
		case 'r':
		{
			srand( time( NULL ) );
		
			switch( tam ) {
				case 10:
				{
					for( i = 0; i < tam; i++ ) {
						vetor[i] = rand() % 100;
					}
					
				break;
				}
				case 100:
				{
					
					for( i = 0; i < tam; i++ ) {
						vetor[i] = rand() % 1000;
					}
					
				break;
				}
				case 10000:
				{
					for( i = 0; i < tam; i++ ) {
						vetor[i] = rand() % 100000;
					}
				
				break;
				}
				default:
				{
					for( i = 0; i < tam; i++ ) {
						vetor[i] = rand() % TAM;
					}
				break;
				}
			}
			
			break;
		}
	}
}

void imprime_Vetor( int *vetor, int tam ) {
	int i;
	
	for( i = 0; i < tam; i++ ) {
		printf( "%d ", vetor[i] );
	}
	printf( "\n" );
}

#endif
