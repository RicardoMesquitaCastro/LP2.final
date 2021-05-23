/*4) Codifique uma função q ue receba um número natural como entrada e defina se ele é par ou
ímpar. */

#include<stdio.h>
#include <locale.h>

void parimpar()
{
	printf("***********************");
	printf("\n   Par ou Impar!\n");
	printf("***********************\n");
}
 int par_impar (int num){
 	if(num % 2 == 0){
	printf("\n\tO número %d é par!",num);
    }else
    printf("\n\tO número %d é impar!",num);
    return 0;
 }
 int main(void){
 	int numero;
 	setlocale(LC_ALL,"Portuguese");
 	parimpar();
 	printf("\nDigite um número natural: ");
 	scanf("%d",&numero);
 	par_impar(numero);
 	return 0;
 }
