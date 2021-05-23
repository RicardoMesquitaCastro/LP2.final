/* O programa em questão trata-se em coletar dados de um determinado número de funcionarios (nome e placa de um veículo) 
definidos pelo usuário, e pela quilometragem feita por um determinado frete é realizado o cálculo de acordo com um intervalo
pré-definido. Ao final é apresentado o relatório com os dados do funcionário e o seu ganho em reais pelo frete!
	Ao início do programa foi utilizado o void informa() para efeito de cabeçalho para o programa e é usado no início e fim
	da execução. A função teve como objetivo realizar os devidos cálculos dos intervalos pré-definidos atravéz do uso de uma 
	seleção composta, cujo, será chamado no programa principal a cada laçõ for. No programa principal é onde os dados de entrada
	foram coletados atravez do uso da estrutura de dados heterogêneas (struct) e homogênea (vetor). O primeiro ciclo for foi utilizado
	para entrada de dados e o segundo a saida de dados e chamada da função "frete".*/ 

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
	printf("\n%iºFUNCIONÁRIO: ",i+1);
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
