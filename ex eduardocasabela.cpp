#include<stdio.h>
//void imprime_cabec(void); //PROTÓTIPO DA FUNÇÃO
//int multiplica(int n1, int n2); //PROTÓTIPO, FUNÇÃO NO FINAL DO CÓDIGO LINHA 5 À LINHA 16.

void imprime_cabec(void)
{
	printf("*************************************\n");
	return;
}

int multiplica(int n1, int n2)
{
	int res; //variavel local da função multiplica
	res = n1 * n2;
	return res;
}

int main (void)
{
	int v1,v2,resultado; //variavel local da função main
	imprime_cabec(); //chamada da função void
	printf("Digite o primeiro valor:");
	scanf("%d",&v1);
	printf("Digite o segundo valor:");
	scanf("%d",&v2);
	resultado = multiplica(v1,v2); //camada da função
	
	printf("Resultado = %d\n",resultado);
	imprime_cabec(); //chamada da função void
	return 0;

}
/*void imprime_cabec(void)
{
	printf("*************************************\n");
	return;
}*/ //PROTÓTIPO

/*int multiplica(int n1, int n2)
{
	int res; //variavel local da função multiplica
	res = n1 * n2;
	return res;
}*/ //PROTÓTIPO
