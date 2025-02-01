#ifndef ARQUIVO_H
#define ARQUIVO_H
#include "diretorio.h"

// Função que verifica se o arquivo foi aberto corretamente o não.
int verifica_Abertura( FILE *pontArq ) {
	if( pontArq != NULL ) {
		//printf( "Sucesso ao abrir o arquivo.\n" );
		return 1;
	} else {
		//printf( "Erro ao abrir o arquivo.\n" );
		return 0;
	}
}

// Função que abre o arquivo, verifica o tipo de abertura do arquivo verifica o tipo do arquivo, e o tipo de abertura 'w' ou 'r'.
FILE *abre_Arquivo( FILE **pontArq, char tipo_Arquivo, char tipo_Abertura, int tam_Entrada, int tipo_Entrada, int algoritmo ) {
	//printf( "Algoritmo:%d\n", algoritmo );
	switch( algoritmo ) {
		case 1:
		{
			switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Insertion_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}	
		case 2:
		{
			switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Bubble_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
		break;
		}
		case 3:
		{
				switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Selection_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}
		case 4:
		{
				switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Shell_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}
		case 5:
		{
			// merge sort
			switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Merge_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}
		case 6:
		{
			// quick sort
			switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Quick_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}
		case 7:
		{
			// heap sort 
			switch( tipo_Arquivo ) {
				case 'c':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Crescente\\entradaCrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'd':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Decrescente\\entradaDecrescente1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 'r':
				{
					switch( tipo_Abertura ) {
						case 'w':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 'r':
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica10000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica100000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_entrada\\Randomico\\entradaRandomica1000000.txt", "r" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 't':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Crescente\\tempoCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Decrescente\\tempoDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_tempo\\Randomico\\tempoRandomico1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
					}
					break;
				}
				case 's':
				{
					switch( tipo_Entrada ) {
						case 1:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Crescente\\saidaCrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 2:
						{
								switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Decrescente\\saidaDecrescente1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
							break;
						}
						case 3:
						{
							switch( tam_Entrada ) {
								case 1:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 2:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 3:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 4:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica10000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 5:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica100000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
								case 6:
								{
									*pontArq = fopen( "Heap_sort\\Arquivos_de_saida\\Randomico\\saidaRandomica1000000.txt", "w" );
									verifica_Abertura( *pontArq );
									break;
								}
							}
						break;
						}
					}
				break;
				}
			}
			break;
		}	
	}
	return *pontArq;
}
	
#endif
