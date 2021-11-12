#include <stdio.h>

#define PI 3.14

void imprime_tela_cabecalho();
float resultado(float value1, float value2);

int main(){

	float raio,
	      altura;

        imprime_tela_cabecalho();//chamada para função de apresentação do programa
	printf("=============================================\n\n");
	printf("INFORME RAIO DO CILINDRO: ");
	scanf("%f",&raio);
	printf("INFORME ALTURA DO CILINDRO: ");
	scanf("%f",&altura);
	printf("\nV = %.2f cm3\n\n",resultado(raio,altura));//chamada para função de calculo do cilindro

	return 0;
}/* Fim do corpo principal da aplicação */

/* Cabeçalho do programa */
void imprime_tela_cabecalho()
{
       printf("\t __________________________ \n");
       printf("\t(__________________________)\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|         _______          |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |                 |\n");
       printf("\t|        |_______          |\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|                          |\n");
       printf("\t|__________________________|\n");
       putchar('\n');
       printf("\t    VOLUME DO CILINDRO\n");
       printf("\nO volume do cilindro é calculado em cm3 ou m3.\n");
       return;
}

float resultado(float value1, float value2)
{
	// V = π.r2.h
	return PI * ((value1*value1) * value2);
}
