/* C�lculo do saldo de uma conta banc�ria
 * Entrada: saldo anterior, dois cheques, um dep�sito
 * Processamento: c�lculo do saldo final
 * Sa�da: o saldo atual
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{	
	float saldoanterior, saldoatual, cheque1, cheque2, deposito;
	
	// Configura��o de local
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	
	printf("\n\n  C�lculo do saldo de uma conta banc�ria\n");
	printf("\n Digite o saldo anterior ........ : ");
	scanf(" %f", &saldoanterior);
	limpabuffer();
	printf(" Digite o valor do primeiro cheque: ");
	scanf(" %f",&cheque1);
	limpabuffer();
	printf(" Digite o valor do segundo cheque : ");
	scanf(" %f",&cheque2);
	limpabuffer();
	printf(" Digite o valor do dep�sito ..... : ");
	scanf(" %f",&deposito);
	limpabuffer();
	system("CLS");
	// C�lculo do saldo atual
	saldoatual = saldoanterior - cheque1 - cheque2 + deposito;
	
	// Sa�da dos dados
	printf("\n Resultado das opera��es:\n");
	printf("\n Saldo anterior: R$%10.2f", saldoanterior);
	printf("\n     - Cheque 1: R$%10.2f", cheque1);
	printf("\n     - Cheque 2: R$%10.2f", cheque2);
	printf("\n     + deposito: R$%10.2f", deposito);
	printf("\n ----------------------------------");
	printf("\n    Saldo atual: R$%10.2f\n\n\n\n",saldoatual);
	system("pause");
	system("CLS");
	
	return 0;
}

void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
