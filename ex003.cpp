/*3) Codifique uma função que receba um número natural como entrada e exibao dia da
semana correspondente por extenso (ex: 1 domingo, 2 segunda, ...) */
#include<stdio.h>
#include <locale.h>
void dia_semana()
{
	printf("***********************");
	printf("\n   Dia da Semana!\n");
	printf("***********************\n");
	return;
}
 int week (int num)
 {
 	switch(num){
 		case 1:
 			printf("\n\t1-Domingo!\n");
 			break;
 		case 2:
		 	printf("\n\t2-Segunda-Feira!\n");
			break;
		case 3:
			printf("\n\t3-Terça-Feira!\n");	
			break;
		case 4:
			printf("\n\t4-Quarta-Feira!\n");
			break;
		case 5:
			printf("\n\t-Quinta-Feira!\n");
			break;
		case 6:
			printf("\n\t-Sexta-Feira!\n");
			break;
		case 7:
			printf("\n\t-Sabado!\n");
			break;
		default:
	 		printf("\n\t=======OPÇÃO INVALIDA========");
			 						
	 }
 	return 0;
 }
 int main(void){
 	int numero;
 	setlocale(LC_ALL,"Portuguese");
 	dia_semana();
 	printf("\nDigite um número de 1 a 7: ");
 	scanf("%d",&numero);
 	week(numero);
 	return 0;
 }


