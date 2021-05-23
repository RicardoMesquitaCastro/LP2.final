/* A NBA te contratou para fazer um programa que venda ingressos de jogos da liga de basquete pela internet.
Este programa deve pedir as informações pessoais de cada acento comprado, para se ter um resguardo em casos de
fraude.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int info (){
	
	int jm, card, cpf;
	
		printf("\n\t Digite o numero do cartão :");
		scanf("%d", &card);
			if (card<99999){
				printf ("\n\t Cartão invalido");
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
	printf ("\n\t Bem vindo a NBA Esports. "); // apresentação do app
	printf("\n\t ---------------------------------------------------------------------------");
	printf("\n\t O único jogo a acontecer nos proximos dias será a final da liga (Lakers vs Celtics) no Staples Center"); // aposto nos Lakers 
	printf ("\n\t O valor de cada acento é de R$287,60 ");
	printf ("\n\t Digite o número de acentos a serem comprados: ");
	scanf ("%d", &num);
	system("cls");
	
	printf("\n\n\n\t Por questões de segurança, nós da NBA pediremos as suas informações pessoais.");//explicção da medida de segurança 
	printf("\n\t Nós garantimos que suas informações serão mantintidas na mais absoluta segurança.");
	printf("\n\t Suas informações servirão como uma medida de segurança em caso de fraude, e nada mais.");
	printf("\n\t Agradecemos pela sua compreenção \n\t");
	
	total = num * 287.60;
	
	printf ("\n\t O valor total a se pagar é de R$%.2f", total);
	info();// função de informações 
	fflush(stdin);
	system("cls");
	
	printf ("\n\t ---------------Seleção de cadeiras---------------\n");
	printf("\n\t Você comprou um total de %d cadeiras, Nomearemos as cadeiras para cada torcedor\n", num);
	
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

printf ("\n\t Imprima esta pagina e leve a entrada do estádio no dia do jogo (11/03/2021) \n\t Lá você receberá o numero dos seus acentos");
printf ("\n\t Obrigado por utilizar o nosso aplicativo e bom jogo");

return(0);
}
