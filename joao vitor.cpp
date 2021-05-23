/* A NBA te contratou para fazer um programa que venda ingressos de jogos da liga de basquete pela internet.
Este programa deve pedir as informa��es pessoais de cada acento comprado, para se ter um resguardo em casos de
fraude.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int info (){
	
	int jm, card, cpf;
	
		printf("\n\t Digite o numero do cart�o :");
		scanf("%d", &card);
			if (card<99999){
				printf ("\n\t Cart�o invalido");
				printf("\n\t Encerraremos os seu programa");
				exit (0);
}

		printf ("\n\t Digite o seu cpf: ");
		scanf("%d", &cpf);
		if (cpf<99999){
				printf ("\n\t Cpf invalido");
				printf("\n\t Encerraremos os seu programa");
				exit (0);
}
		
}

int main (void){
	
	setlocale(LC_ALL, "portuguese");
	int jm,num;
	float total;
	char  numeracao[100][100];
	printf ("\n\t Bem vindo a NBA Esports. "); // apresenta��o do app
	printf("\n\t ---------------------------------------------------------------------------");
	printf("\n\t O �nico jogo a acontecer nos proximos dias ser� a final da liga (Lakers vs Celtics) no Staples Center"); // aposto nos Lakers 
	printf ("\n\t O valor de cada acento � de R$287,60 ");
	printf ("\n\t Digite o n�mero de acentos a serem comprados: ");
	scanf ("%d", &num);
	system("cls");
	
	printf("\n\n\n\t Por quest�es de seguran�a, n�s da NBA pediremos as suas informa��es pessoais.");//explic��o da medida de seguran�a 
	printf("\n\t N�s garantimos que suas informa��es ser�o mantintidas na mais absoluta seguran�a.");
	printf("\n\t Suas informa��es servir�o como uma medida de seguran�a em caso de fraude, e nada mais.");
	printf("\n\t Agradecemos pela sua compreen��o \n\t");
	
	total = num * 287.60;
	
	printf ("\n\t O valor total a se pagar � de R$%.2f", total);
	info();// fun��o de informa��es 
	fflush(stdin);
	system("cls");
	
	printf ("\n\t ---------------Sele��o de cadeiras---------------\n");
	printf("\n\t Voc� comprou um total de %d cadeiras, Nomearemos as cadeiras para cada torcedor\n", num);
	
	for (jm =1; jm<=num; jm++){
		printf ("\n\t Digite o nome do torcedor da cadeira %d:", jm);
		gets(numeracao[jm]);
		
	}
	

	system("cls");
	
	printf ("\n\t ---------------Comprovante de compra---------------\n");
	printf("\n\t Total pago = %.2f ", total);
	for (jm =1; jm<=num; jm++){
		fflush(stdin);
		printf ("\n\t torcedor %s \n ", numeracao [jm]);
}

printf ("\n\t Imprima esta pagina e leve a entrada do est�dio no dia do jogo (11/03/2021) \n\t L� voc� receber� o numero dos seus acentos");
printf ("\n\t Obrigado por utilizar o nosso aplicativo e bom jogo");

return(0);
}
