/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÕES TRINDADE
 * DATA:      24/10/2021
 * PROGRAMA:  REGISTRO DE ALUNOS - V1.0 
 *
 ********************************************/

#include <stdio.h>
#include <stdlib.h>

int calculoIMC(int peso,int altura);

int main() {
   char opcao;
   unsigned int peso,
		altura; 

   do
   {
   	printf("\n\t-------------------------------------\n");
   	printf("\t---------- CALCULADORA IMC ----------\n");
   	printf("\t-------------------------------------\n");
     	printf("\t 1 - CONTINUAR                       \n");
   	printf("\t 2 - SAIR                            \n");
   	printf("\t-------------------------------------\n");
   	//opcao = getchar();
        scanf(" %c",&opcao);

        switch(opcao)
	{
	 case '1': printf("\tSELECIONADA OPCAO N° %c \n ",opcao);
		 break;
	 case '2': printf("\tSELECIONADA OPCAO N° %c \n\n",opcao);
		 exit(1);
         default: printf("\tFAVOR SELECIONAR UMAS DAS OPCOES DEMOSTRADA NO MENU!\n\n");
	
	}	

   }while(opcao != '1');
	
   printf("\nINSIRA SEU PESO (KG): \n");
   scanf("%d",&peso);
   printf("INSIRA SUA ALTURA (M): \n");
   scanf("%d",&altura);

   calculoIMC(peso,altura);

   printf("O VALOR DO SEU IMC EH  = %d \n\n",calculoIMC(peso,altura));

    return 0;
}
 
int calculoIMC(int peso,int altura)
{
	return (peso/altura*altura);
}
  

