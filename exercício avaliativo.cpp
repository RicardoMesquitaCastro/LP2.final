/*  Foi inicializado uma fun��o mediaaluno que calcula a media de duas notas de um aluno.
Logo no int main() do programa s�o recebido os dados das notas e utilizada a func�o para calculo.
*/
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

void informa()
{
	printf("***********************");
	printf("\n   M�dia Aluno!\n");
	printf("***********************\n");
}
float mediaaluno(float nota1, float nota2){
float md,soma;
	
	soma = nota1 + nota2;
	md = soma/2;
	if (md < 30){
	printf("\n\tALUNO REPROVADO. \n");
	printf("\n ##### A M�dia do aluno � %.2f ######\n",md);
}
	else if (md >= 30 && md < 60){
	printf("\n\tALUNO DE QUINTA PROVA. \n");
	printf("\n ##### M�dia do aluno: %.2f ######\n",md);
}
	else{
	printf("\n\tAlUNO APROVADO. \n");
	printf("\n ##### M�dia do aluno �: %.2f ######\n",md);
}
}
		
	
int main (){
float notaum,notadois;
setlocale(LC_ALL,"Portuguese");
informa();
printf("\nDigite a primeira nota: ");
scanf("%f",&notaum);
printf("\nDigite a segunda nota : ");
scanf("%f",&notadois);
system("cls");
mediaaluno(notaum,notadois);

return (0); 
}

