#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void inicio(void);

void final(void);

float rendad(float n1, int n2);

float renda(float v1, int v2);

struct venda
{
	int svd[3], dv, qvd[3][1];
	float ps[3], rdd[3], rd[3], rdt, rt;
	char sabor[3][50];
};

int main(void)
{
	
	int i, j;
	
	struct venda venda;
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	inicio();
	
	printf("\nDias de venda - ");
	scanf("%d", &venda.dv);	
	
	system("pause");
	system("cls");
	
	for(i=0; i<3; i++)
	{
		inicio();
		
		printf("\nSabor %d:\n", i+1);
		printf("\nSabor - ");
		fflush(stdin);
		gets(venda.sabor[i]);
		
		printf("\nPreço do sorvete - ");
		scanf("%f", &venda.ps[i]);
		
		printf("\nQuantos são vendidos por dia - ");
		scanf("%d", &venda.svd[i]);
		
		venda.rd[i] = rendad(venda.ps[i], venda.svd[i]);
		
		venda.rdd[i] = renda(venda.rd[i], venda.dv);
		
		for(j=0; j<1; j++)
	{
		venda.qvd[i][j] = venda.svd[i] * venda.dv; 
	} 
		
		system("pause");
		system("cls");
	}
	
	venda.rdt = venda.rd[0] + venda.rd[1] + venda.rd[2];
	
	venda.rt = venda.rdd[0] + venda.rdd[1] + venda.rdd[2];
	
	for(i=0; i<3; i++)
	{
		final();
		
		printf("\nSabor %d:\n", i+1);
		printf("\nSabor - %s\n", venda.sabor[i]);
		printf("\nPreço do sorvete - %.2f\n", venda.ps[i]);
		printf("\nQuantos são vendidos por dia - %d\n", venda.svd[i]);
		printf("\nRenda diária - %.2f\n", venda.rd[i]);
		printf("\nDias de venda - %d\n", venda.dv);
		
		for(j=0; j<1; j++)
		{
			printf("\nSorvetes vendidos durante os dias de vendas - %d\n", venda.qvd[i][j]);
		}
		
		printf("\nRenda durante os dias de venda - %.2f\n\n", venda.rdd[i]);
		system("pause");
		system("cls");
	}
	
	final();
	
	printf("\nRenda diária total - %.2f\n", venda.rdt);
	printf("\nRenda total durante os dias de vendas - %.2f", venda.rt);
	
return 0;	
}

void inicio(void)
{
	printf("\n*****Preencha os dados*****\n");
	return;
}

void final(void)
{
	printf("\n*****Dados recebidos*****\n");
	return;
}

float rendad(float n1, int n2)
{
	float red;
	red = n1 * n2;
	return red;
	
}

float renda(float v1, int v2)
{
	float r;
	r = v1 * v2;
	return r;
}
