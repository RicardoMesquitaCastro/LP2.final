#include <stdio.h>
//Função saudação
void saudacao()
{
	printf("\n\tOla - Seja Bem Vindo!\n");
}
//Função Maior_Valor
void maior (float a, float b, float c)
{
	if (a>b && a>c)
	{
		printf("\n\t%.1f - Maior Valor\n",a);
	}
	else
	if (b>a && b>c)
    {
    	printf("\n\t%.1f - Maior Valor\n",b);	
	}
	else
	{
		printf("\n\t%.1f - Maior Valor\n",c);
	}
}
//Função despedida
void despedida ()
{
	printf("\n\tFim de Programa.");	
}
int main()
{
	float a, b, c;
	saudacao();
	printf("\n\tDigite Valor 1- ");
	scanf("%f",&a);
	printf("\n\tDigite Valor 2- ");
	scanf("%f",&b);
	printf("\n\tDigite Valor 3- ");
	scanf("%f",&c);
	maior (a,b,c);
	despedida();
	return (0);
}
