/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÕES TRINDADE
 * DATA:      23/10/2021
 * PROGRAMA:  REGISTRO DE ALUNOS - V1.0 
 *
 ********************************************/


#include <stdio.h>
#include <stdlib.h>

void menu(void);

 struct registro
 {
         char nome[31];     //armazena o nome dos alunos registrado no sistema
         char endereco[41]; //armazena o endereco dos alunos registrado no sistema
 };

        struct registro  aluno; //cria variável aluno do tipo struct

int main()
{
        int op = 0; 

 	while(1)
	{
		printf("\nDeseja cadastrar aluno?\n");
		printf("1 - SIM\n2 - NAO");
        printf("\n=======================\n");
        fflush(stdin);
		scanf("%d",&op);  
        //fflush(stdin);

		if(op == 1)
		{
			break; //saída do laço infinito while
		}
		else {
			printf("PROGRAMA FINALIZADO!\n");
			exit(1);
		}
	}	 

	menu();//chamada da função menu 

	return 0;
}

void menu(void)
{
         printf("\nBUG! :( \n");
         

	     printf("\n\n---------- REGISTRO DE ALUNOS -----------\n\n");
         printf("\nNOME DO ALUNO: \n");
         fflush(stdin);
         fgets(aluno.nome, 40, stdin);
		 //scanf("%s",&aluno.nome);  
         

         printf("\nENDERECO  DO ALUNO: \n");
 		 scanf("%c",&aluno.endereco);  
         //fflush(stdin);
	
         putchar('\n');
         printf("---------- REGISTRO FINALIZADO  -----------\n\n");
         printf("NOME         : %s",aluno.nome);
         printf("ENDERECO     : %s",aluno.endereco);
         putchar('\n');
	 return;
}
