/* O programa em quest�o trata-se em coletar dados de um determinado n�mero de funcionarios (nome e placa de um ve�culo) 
definidos pelo usu�rio, e pela quilometragem feita por um determinado frete � realizado o c�lculo de acordo com um intervalo
pr�-definido. Ao final � apresentado o relat�rio com os dados do funcion�rio e o seu ganho em reais pelo frete!
	Ao in�cio do programa foi utilizado o void informa() para efeito de cabe�alho para o programa e � usado no in�cio e fim
	da execu��o. A fun��o teve como objetivo realizar os devidos c�lculos dos intervalos pr�-definidos atrav�z do uso de uma 
	sele��o composta, cujo, ser� chamado no programa principal a cada la�� for. No programa principal � onde os dados de entrada
	foram coletados atravez do uso da estrutura de dados heterog�neas (struct) e homog�nea (vetor). O primeiro ciclo for foi utilizado
	para entrada de dados e o segundo a saida de dados e chamada da fun��o "frete".*/ 

#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

void informa()
{
	printf("**************************************");
	printf("\n   CONTROLE DE PAGAMENTO DE FRETE\n");
	printf("************************************\n");
}



float frete (float qkm){
	
	float kmtotal;
	float valor=0;
	

		if (qkm <= 50){
				valor= qkm * 5.00;
		printf("\nVALOR A RECEBER: R$%.2f.\n",valor);		
	
		}else if(qkm > 50 && qkm <100){
				valor =qkm * 10.50;
		printf("\nVALOR A RECEBER: R$%.2f.\n",valor);
		
		}else if (qkm>= 100 && qkm < 150){
				valor = qkm * 8.50;
		printf("\nVALOR A RECEBER: R$%.2f.\n",valor);
		}else if (qkm >= 150 && qkm < 300){
				valor = qkm * 6.00;
		printf("\nVALOR A RECEBER: R$%.2f.\n",valor);
		}else{
				valor = qkm * 4.00;
		printf("\nVALOR A RECEBER: R$%.2f.\n",valor);
	    }
	    
}

int main(){
struct dados{
	
	char nome[50];
	char placa[7];
	float km;
		
	}; struct dados funcionario[5];
	
	int i,quant;
	float valor,km;
	setlocale(LC_ALL,"Portuguese");
	informa();
	printf("\nDigite a quantidade de motoristas: ");
	scanf("%d",&quant);
	fflush(stdin);
	system("cls");
	
	for(i=0; i<quant; i++){
	printf("\n");
	printf("\n%i�FUNCION�RIO: ",i+1);
	gets(funcionario[i].nome);
	fflush(stdin);
	printf("PLACA: ");
	gets(funcionario[i].placa);
	printf("TOTAL DE KILOMETROS RODADOS: ");
	scanf("%f",&funcionario[i].km);
	fflush(stdin);
	system("cls");
		
	
}
informa();
for(i=0;i<quant; i++){
	
	
	printf("\nMOTORISTA: %s\n PLACA: %s.",funcionario[i].nome,funcionario[i].placa);
	frete(funcionario[i].km);
}
	
return 0;	
}
