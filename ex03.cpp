/*cRIAR DUAS FUN��ES:
1�Definir o maior valor;
2�Calcular a media de dois valores;*/
#include<stdio.h>
#include <locale.h>
float maior (float a, float b)//1� fun��o
{
	if (a>b)
	return a;
	else
	return b;
}
float media (float a, float b) //2�Fun��o
{
	float calc;
	calc = (a+b)/2;
	return calc;
}
int main()
{
	float p1,p2,t1,t2,result;
	setlocale (LC_ALL,"Portuguese");
	printf("\n\tDigite Nota da Prova 1: ");
	scanf("%f",&p1);
	printf("\n\tDigite Nota da Prova 2: ");
	scanf("%f",&p2);
	printf("\n\tDigite Nota do Trabalho 1: ");
	scanf("%f",&t1);
	printf("\n\tDigite Nota do Trabalho 2: ");
	scanf("%f",&t2);
	result = media (maior(p1,p2),maior(t1,t2)); //chamando fun��es void
	printf("\n\tM�dia do Aluno: %.1f",result);
	return 0;
}
	
	
	

