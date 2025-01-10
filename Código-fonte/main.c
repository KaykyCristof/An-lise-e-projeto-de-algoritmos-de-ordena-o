#include "diretorio.h"
#include "arquivo.h"
#include "vetor.h"
#include "insertionSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include "shellSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "heapSort.h"

int main() {
	FILE *pontArq = NULL;				// Ponteiro para abertura de arquivos.
	char tipo_Abertura = '\0';			// Variável para configurar o tipo de abertura de arquivos como sendo 'c' , 'd' , 'r', 'w' e 'r'. 
	int *vetor = NULL;					// Ponteiro para alocar dinamicamente memório para o vetor. 
	int tam = 0;						// Variável que é atribuida o tamanho da entrada sendo estas 10, 100, 1000, 10000, 100000, 1000000.
	int tam_Entrada = 0;				// Variável que configura a opção do tamanho da entrada dado a escolha de opcao.
	char tipo_Arquivo = '\0';           // Variável que configura qual tipo de diretório deverá ser aberto.
	double tempo = 0;					// Variável que recebe o tempo de execução de cada algoritmo.
	int algoritmo = 0;					// Variável que recebe como entrada um valor que determina qual algoritmo irá executar.
	int tipo_Entrada = 0;				// Define o tipo de entrada crescente, descrescente ou randomica.
	char arq_Entrada = '\0';			// Define o tipo de entrada baseado em arquivos de tempo e saída.
	
	do {
        printf("\n==============================================\n");
        printf("           Algoritmos de Ordenacao\n");
        printf("==============================================\n");
        printf("  [1] Insertion Sort\n");
        printf("  [2] Bubble Sort\n");
        printf("  [3] Selection Sort\n");
        printf("  [4] Shell Sort\n");
        printf("  [5] Merge Sort\n");
        printf("  [6] Quick Sort\n");
        printf("  [7] Heap Sort\n");
        printf("  [0] Sair\n");
        printf("==============================================\n");
        
        printf("Escolha um algoritmo (0-7): ");
        scanf( "%d", &algoritmo );
		system( "cls" );
		
		switch( algoritmo ) {
			case 1:
			{
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = insertion_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 2:
			{
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					case 2:
					{	
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );					
	
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
							
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = bubble_Sort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 3:
			{
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{	
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = selectionSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 4:
			{
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}	
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = shellSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 5:
			{
				// Merge sort
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = mergeSort( vetor, 0, tam - 1 );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 6:
			{
				// quick sort
				int escolha_Pivo;
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				printf( "Escolha do pivo:\n1-Primeiro\n2-Media\n3-Randomico\n" );
				scanf( "%d", &escolha_Pivo );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo);
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = quickSort( vetor, 0, tam - 1, escolha_Pivo );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			case 7:
			{
				// Heap Sort
				printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
				scanf( "%d", &tipo_Entrada );
				system( "cls" );
				
				switch( tipo_Entrada ) {
					case 1:
					{
						tipo_Arquivo = 'c';
						arq_Entrada = 'c';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'c';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 2:
					{
						tipo_Arquivo = 'd';
						arq_Entrada = 'd';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'd';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					case 3:
					{
						tipo_Arquivo = 'r';
						arq_Entrada = 'r';
						cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
						
						printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
						scanf( "%d", &tam_Entrada );
						system( "cls" );
						
						switch( tam_Entrada ) {
							case 1:
							{
								tam = 10;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 2:
							{
								tam = 100;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 3:
							{
								tam = 1000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 4:
							{
								tam = 10000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 5:
							{
								tam = 100000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							case 6:
							{
								tam = 1000000;
								aloca_Memoria( &vetor, tam );
								
								tipo_Abertura = 'w';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'r';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								le_Dados( pontArq, tam, vetor );
								fclose( pontArq );
								
								tempo = heapSort( vetor, tam );
								
								tipo_Arquivo = 't';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								tipo_Abertura = 't';
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Arquivo = 's';
								cria_Diretorio( tipo_Arquivo, algoritmo, arq_Entrada );
								
								abre_Arquivo( &pontArq, tipo_Arquivo, tipo_Abertura, tam_Entrada, tipo_Entrada, algoritmo );
								insere_Dados( pontArq, tam, tipo_Arquivo, tempo, vetor );
								fclose( pontArq );
								
								tipo_Abertura = 'w';
								tipo_Arquivo = 'r';
								
								free( vetor );
								
								break;
							}
							default:
							{
								if( tam_Entrada != 0 ) {
									printf( "Opcao invalida!\n" );
								}
							}
						}
						
						break;
					}
					default:
					{
						if( tipo_Entrada != 0 ) {
							printf( "Opcao invalida!\n" );
						}
					}
				}
				break;
			}
			default:
			{
				if( algoritmo != 0 ) {
					printf( "Opcao invalida!\n" );
				}
			}
		}
	} while( algoritmo != 0 );
	
	printf( "Encerrando programa...\n" );

	return 0;
}
