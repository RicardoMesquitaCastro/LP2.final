#include <stdio.h>
#include<locale.h>
#include <windows.h>


void contagem()
{
	printf("\t\t***********************");
	printf("\n\t\t   Contagem Regressiva!\n");
	printf("\t\t***********************\n");
}
void num (void)
{
	int i,n;
	printf("\n\tDigite um n�mero: ");
	scanf("%d",&n);	

	for(i=n; i>0;i--){
	
	Sleep (500); //pausa dram�tica. Biblioteca <windows.h>
	printf(">>>>>%d<<<<<\n",i);
}

return ;
}
	
	
int main ()
{
	int numero;
setlocale(LC_ALL,"Portuguese");	
contagem();
num();
printf("\n\t***********FIRE**********");
 
return 0;		
}
	



