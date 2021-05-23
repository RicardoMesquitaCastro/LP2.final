/*cRIAR DUAS FUNÇÕES:
1ºDefinir o maior valor;
2ºCalcular a media de dois valores;*/
#include<stdio.h>
#include <locale.h>
float maior (float a, float b)//1º função
{
	if (a>b)
	return a;
	else
	return b;
}
float media (float a, float b) //2ºFunção
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
	result = media (maior(p1,p2),maior(t1,t2)); //chamando funções void
	printf("\n\tMédia do Aluno: %.1f",result);
	return 0;
}
	
	
	

