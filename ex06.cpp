// 6/Elabore uma fun��o para calcular o fatorial de um n�mero qualquer.

#include<stdio.h>
#include <locale.h>
 void fatorando (void){
 	int fat,n;
 	printf("Digite um n�mero inteiro: ");
 	scanf("%d",&n);
 	for(fat=1; n>1; n=n-1) // exemplo: n=3 = 3x2x1 = 6
 	fat = fat*n;
 	
 	printf("\nFatorial calculado: %d", fat);
 	return;
 }
 int main(void){
 	setlocale(LC_ALL,"Portuguese");
 	fatorando();
 	return 0;
 }

