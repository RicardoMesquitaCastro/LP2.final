#include<stdio.h>
//void imprime_cabec(void); //PROT�TIPO DA FUN��O
//int multiplica(int n1, int n2); //PROT�TIPO, FUN��O NO FINAL DO C�DIGO LINHA 5 � LINHA 16.

void imprime_cabec(void)
{
	printf("*************************************\n");
	return;
}

int multiplica(int n1, int n2)
{
	int res; //variavel local da fun��o multiplica
	res = n1 * n2;
	return res;
}

int main (void)
{
	int v1,v2,resultado; //variavel local da fun��o main
	imprime_cabec(); //chamada da fun��o void
	printf("Digite o primeiro valor:");
	scanf("%d",&v1);
	printf("Digite o segundo valor:");
	scanf("%d",&v2);
	resultado = multiplica(v1,v2); //camada da fun��o
	
	printf("Resultado = %d\n",resultado);
	imprime_cabec(); //chamada da fun��o void
	return 0;

}
/*void imprime_cabec(void)
{
	printf("*************************************\n");
	return;
}*/ //PROT�TIPO

/*int multiplica(int n1, int n2)
{
	int res; //variavel local da fun��o multiplica
	res = n1 * n2;
	return res;
}*/ //PROT�TIPO
