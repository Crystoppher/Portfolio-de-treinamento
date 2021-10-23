/*
 * NOME: CRYSTOPPHER SIMÕES TRINDADE
 * DATA: 23/10/2021
 * PROGRAMA: REGISTRO DE ALUNOS - V1.0 
 *
 */


#include <stdio.h>
#include <stdlib.h>


        struct registro
        {
                char nome[31]; //armazena o nome dos alunos registrado no sistema
                char endereco[41]; //armazena o endereco dos alunos registrado no sistema
        };

      struct registro  aluno;


int main()
{

          
         //putchar('\n');	
	 printf("---------- REGISTRO DE ALUNOS -----------\n\n");
	 printf("\nNOME DO ALUNO: \n");
         fgets(aluno.nome,30,stdin);

	 printf("\nENDERECO  DO ALUNO: \n");
	 fgets(aluno.endereco,40,stdin);
	

         putchar('\n');		
	 printf("---------- REGISTRO FINALIZADO  -----------\n\n");
	 printf("NOME         : %s",aluno.nome);
	 printf("ENDERECO     : %s",aluno.endereco);



	return 0;
}
