/******************************************************************************
 *
 * NOME:     CRYSTOPPHER SIMÕES TRINDADE
 * DATA:     09/11/2021
 * PROGRAMA: SISTEMA DE CRUD - V1.0 
 *
 * Este programa basea-se num sistema CRUD.
 * C: Create (criar) - criar um novo registro
 * R: Read (ler) - ler (exibir) as informações de um registro
 * U: Update (atualizar) - atualizar os dados do registro
 * D: Delete (apagar) - apagar um registro
 *
 ******************************************************************************/

//Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Diretivas e Constantes 
#define TAM 100

//Protótipo de funções
void menu();
void inicializar();
void create();
void read();
void update();
void delete();

struct banco_lista
{
	char nome[TAM];
	char endereco[TAM];
	int  ID[];

}; 
struct banco_lista REGISTRO;

//Função Principal
int main()
{
    menu();

    return 0;
}//end main();


//Desenvolvimento das funções 
void menu()
{
  putchar('\n');
  printf(" *********************************************\n");
  printf(" *                                           *\n");
  printf(" *   $$$  $$$   $$$$$   $$    $   $     $    *\n");
  printf(" *   $  $$  $   $       $ $   $   $     $    *\n");
  printf(" *   $      $   $$$$    $  $  $   $     $    *\n");
  printf(" *   $      $   $       $   $ $   $     $    *\n");
  printf(" *   $      $   $$$$$   $    $$    $$$$$     *\n");
  printf(" *                                           *\n");
  printf(" *********************************************\n");
  putchar('\n');

  // sleep (50); // Usar no Linux
  // sistema ("limpar");
}
void inicializar()
{

}
void create()
{

}
void read()
{

}
void update()
{

}
void delete()
{

}

