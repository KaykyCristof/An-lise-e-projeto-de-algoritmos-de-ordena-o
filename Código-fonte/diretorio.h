#ifndef DIRETORIO_H
#define DIRETORIO_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>



// Função que cria os diretorios para os arquivos.
void cria_Diretorio( char tipo_Arquivo, int algoritmo, char arq_Entrada ) {
	switch( algoritmo ) {
		case 1:
		{
			if( CreateDirectory( "Insertion_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Insertion_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Insertion_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Insertion_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Insertion_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Insertion_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Insertion_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Insertion_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
							//	printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
			//
		}
		case 2:
		{
			if( CreateDirectory( "Bubble_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Bubble_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Bubble_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Bubble_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Bubble_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Bubble_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Bubble_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Bubble_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}
		case 3:
		{
			if( CreateDirectory( "Selection_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Selection_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Selection_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
					//	printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Selection_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Selection_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Selection_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Selection_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Selection_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}	
		case 4:
		{
			if( CreateDirectory( "Shell_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Shell_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Shell_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Shell_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Shell_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Shell_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Shell_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Shell_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}
		case 5:
		// Merge sort 
		{
			if( CreateDirectory( "Merge_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Merge_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Merge_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Merge_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Merge_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Merge_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Merge_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Merge_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}
		case 6:
		{
			// Quick sort 
			if( CreateDirectory( "Quick_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Quick_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Quick_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Quick_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Quick_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Quick_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Quick_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Quick_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}
		case 7:
		{
			// Heap sort 
			if( CreateDirectory( "Heap_sort", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			if( CreateDirectory( "Heap_sort\\Arquivos_de_entrada", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
				//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
			} else {
				DWORD erro = GetLastError();
				//printf( "Erro ao criar diretorio.\n" );
				exit(1);
			}
			
			switch( tipo_Arquivo ) {
				case 'c':
				{
					if( CreateDirectory( "Heap_sort\\Arquivos_de_entrada\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					break;
				}
				case 'd':
				{
					if( CreateDirectory( "Heap_sort\\Arquivos_de_entrada\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 'r':
				{
					if( CreateDirectory( "Heap_sort\\Arquivos_de_entrada\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					break;
				}
				case 't':
				{
					if( CreateDirectory( "Heap_sort\\Arquivos_de_tempo", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_tempo\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_tempo\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_tempo\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					break;
				}
			}
				case 's':
				{
					if( CreateDirectory( "Heap_sort\\Arquivos_de_saida", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
						//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
					} else {
						DWORD erro = GetLastError();
						//printf( "Erro ao criar diretorio.\n" );
						exit(1);
					}
					
					switch( arq_Entrada ) {
						case 'c':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_saida\\Crescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'd':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_saida\\Decrescente", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							}
							break;
						}
						case 'r':
						{
							if( CreateDirectory( "Heap_sort\\Arquivos_de_saida\\Randomico", NULL ) || GetLastError() == ERROR_ALREADY_EXISTS ) {
								//printf( "Diretorio criado com sucesso, ou o diretorio ja existe.\n" );
							} else {
								DWORD erro = GetLastError();
								//printf( "Erro ao criar diretorio.\n" );
								exit(1);
							break;
							}
						}
					}
					break;
				}
			}		
			break;
		}
	}
}

#endif
