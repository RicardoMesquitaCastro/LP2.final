/*4) Codifique uma fun��o q ue receba um n�mero natural como entrada e defina se ele � par ou
�mpar. */

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
	printf("\n\tO n�mero %d � par!",num);
    }else
    printf("\n\tO n�mero %d � impar!",num);
    return 0;
 }
 int main(void){
 	int numero;
 	setlocale(LC_ALL,"Portuguese");
 	parimpar();
 	printf("\nDigite um n�mero natural: ");
 	scanf("%d",&numero);
 	par_impar(numero);
 	return 0;
 }
