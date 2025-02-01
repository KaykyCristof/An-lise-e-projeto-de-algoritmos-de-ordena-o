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
	int tipoHeap = 0;					// Define qual tipo de construção de heap será feito.
	int menorHeap = 0;					// Recebe o menor elemento do Heap mínimo.
	int posicao = 0;					// Posição no qual o elemento 1000 será inserido no heap.
	
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
        printf("  [8] Construir heap\n" );
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								printf( "ARRANJO ORIGINAL: " );
								imprime_Vetor( vetor, tam );
								
								printf( "CHAMADO A BUILD_MAX_HEAP: " );
								BUILD_MAX_HEAP( vetor, tam );
								imprime_Vetor( vetor, tam );
								
								printf( "ARRANJO ORDENADO: " );
								heapSort( vetor, tam, tipoHeap );
								imprime_Vetor( vetor, tam );
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
								
								tempo = heapSort( vetor, tam, tipoHeap );
								
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
			case 8:
			{
				tipoHeap = 1;
				int escolhaHeap;
				char escolhaEntrada;
				
				printf( "Escolha do heap:\n1-HEAP_MINIMUM\n2-HEAP_EXTRACT_MIN\n3-HEAP_INCREASE-KEY\n4-MAX_HEAP_INSERT\n0-Sair\n" );
				scanf( "%d", &escolhaHeap );
				system( "cls" );
					
				switch( escolhaHeap ) {
					case 1:
					{	
						printf( "Insira o tipo de entrada:\n1-Crescente\n2-Decrescente\n3-Randomica\n" );
						scanf( "%d", &tipo_Entrada );
						system( "cls" );
						
						switch( tipo_Entrada ) {
							case 1:
							{
								escolhaEntrada = 'c'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'd';
									 
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
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
							{	escolhaEntrada = 'r';
							 
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										printf( "Menor elemento apos o BUILD_MIN_HEAP: \n%d\n", vetor[0] );
										
										printf( "CHAMADO O HEAPSORT:\n" );
										heapSort( vetor, tam, tipoHeap );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'c'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
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
								escolhaEntrada = 'd'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
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
								escolhaEntrada = 'r'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										menorHeap = HEAP_EXTRACT_MIN( vetor, &tam );
										
										printf( "Vetor apos a chamada da funcao HEAP_EXTRACT_MIN:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "Elemento removido do heap: %d\n", menorHeap );
										
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
						
						printf( "Insira a posicao no qual o elemento 1000 sera inserido no heap:\n" );
						scanf( "%d", &posicao );
						
						switch( tipo_Entrada ) {
							case 1:
							{
								escolhaEntrada = 'c'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'd'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'r'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										MAX_HEAP_INSERT( &vetor, &tam, posicao );
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'c'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'd'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
								escolhaEntrada = 'r'; 
								
								printf( "Insira o tamanho da entrada.\n1-10\n2-100\n3-1000\n4-10000\n5-100000\n6-1000000\n0-Sair\n" );
								scanf( "%d", &tam_Entrada );
								system( "cls" );
								switch( tam_Entrada ) {
									case 1:
									{
										tam = 10;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 2:
									{
										tam = 100;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 3:
									{
										tam = 1000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 4:
									{
										tam = 10000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 5:
									{
										tam = 100000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										free( vetor );
										
										break;
									}
									case 6:
									{
										tam = 1000000;
										aloca_Memoria( &vetor, tam );
										insere_Vetor( vetor, tam, escolhaEntrada );
										
										printf( "VETOR ORIGINAL:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
										BUILD_MIN_HEAP_AND_INSERT( &vetor, &tam );
										
										printf( "VETOR APOS INSERCAO:\n" );
										imprime_Vetor( vetor, tam );
										
										printf( "CHAMADO A BUILD APOS INSERCAO:\n" );
										BUILD_MIN_HEAP( vetor, tam );
										imprime_Vetor( vetor, tam );
										
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
						if( escolhaHeap != 0 ) {
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
