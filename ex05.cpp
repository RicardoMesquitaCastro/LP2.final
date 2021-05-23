/*5/Codifique uma função que calcula a média ponderada de duas notas. Essa função deve
receber quatro dados de entrada, sendo as notas e seus respectivos pesos.*/

#include<stdio.h>
#include <locale.h>
float media_ponderada (float nota1, float nota2, float peso1, float peso2){
	int i;
	float mp;
	
	mp = (((nota1*peso1)+(nota2*peso2))/(peso1+peso2));

return mp;		
}

int main (void){
	
	float n1,n2,p1,p2,resultado;
	setlocale(LC_ALL,"Portuguese");
	printf("\n\tDigite a primeira nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("\n\tDigite a segunda nota: ");
	scanf("%f",&n2);
	printf("\n\tDigite o peso 1: ");
	scanf("%f",&p1);
	printf("\n\tDigite o peso 2: ");
	scanf("%f",&p2);
	resultado = media_ponderada(n1,n2,p1,p2);
	
	printf("\n\tA média ponderada é %.2f.",resultado);
	return 0;
}

