#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

void informa()
{
	printf("***********************");
	printf("\n   FRETE\n");
	printf("***********************\n");
}

float frete_calc (  char *nome, char *placa,float *qkm){
	
	struct dadosmotora{
		char nome [2][50],placa[2][10];
		float qkm[2],valor[2];
		int i,j;
		
		}; struct dadosmotora kilometer;
		
		for(i=0; i<2; i++){
	printf("\n");
	printf("\n%s. ",kilometer.nome[i]);
	printf("\n%s. ",kilometer.placa[i]);
	printf("\nDigite a quantidade de KM:");
	scanf("%f",&qkm);
	
	
	fflush(stdin);
	for(j=0; j<2; j++){
		if (kilometer.qkm[j] <= 50){
		kilometer.valor[j] = kilometer.qkm[j] * 5.00;
		printf("\nO motorista %s placa %s receberá %.2f.",kilometer.nome[i],kilometer.placa[i],kilometer.valor[i]);
		}else if(kilometer.qkm[j] > 50 && kilometer.qkm[j] <100){
				kilometer.valor[j] = kilometer.qkm[j] * 3.50;
		printf("\nO motorista %s placa %s receberá %.2f.",kilometer.nome[i],kilometer.placa[i],kilometer.valor[i]);
		
		}else if (kilometer.qkm[j]>= 100 && kilometer.qkm[j] < 150){
				kilometer.valor[j] = kilometer.qkm[j] * 2.50;
		printf("\nO motorista %s placa %s receberá %.2f.",kilometer.nome[i],kilometer.placa[i],kilometer.valor[i]);
		}else if (kilometer.qkm[j] >= 150 && kilometer.qkm[j] < 300){
				kilometer.valor[j] = kilometer.qkm[j] * 2.00;
		printf("\nO motorista %s placa %s receberá %.2f.",kilometer.nome[i],kilometer.placa[i],kilometer.valor[i]);
		}else{
				kilometer.valor[j] = (kilometer.qkm[j] * 1.50)*0.03;
	    printf("\nO motorista %s placa %s receberá %.2f.",kilometer.nome[i],kilometer.placa[i],kilometer.valor[i]);
	    }
} // for J fechar
fflush(stdin);		
} // for I fechar
                  //return 0 ;
} //função fechar

int main (void){
	char nome_f[2],placa_f[2];
	float qkm_f[2];
	float resultado;
	
	setlocale(LC_ALL,"Portuguese");
	informa();
	printf("\nDigite o nome:");
	scanf("%s",&nome_f);
	printf("\nDigite a placa:");
	scanf("%s",&placa_f);
	frete_calc(nome_f,placa_f,qkm_f);
	
	return 0;	
}

