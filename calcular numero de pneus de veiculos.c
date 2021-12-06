/* C�lculo do n�mero de pneus de ve�culos
 * Entrada: quantidade de carros e motos
 * Processamento: c�lculo do n�mero de pneus e veiculos
 * Sa�da: n�mero de pneus e n�mero de ve�culos
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{	
	int motos, carros;
	
	// Configura��o de local
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
		
	printf("\n\n  C�lculo do n�mero de pneus e ve�culos no estacionamento\n");
	printf("\n Digite a quantidade de motos : ");
	scanf(" %d", &motos);
	limpabuffer();
	printf(" Digite a quantidade de carros: ");
	scanf(" %d",&carros);
	limpabuffer();
	system("CLS");
	
	// Sa�da dos dados
	printf("\n Quantidade de pneus e ve�culos no estacionamento:\n");
	printf("\n           Motos  : %4d\t = Pneus: %4d", motos, motos * 2);
	printf("\n           Carros : %4d\t = Pneus: %4d", carros, carros * 4);
	printf("\n ----------------------------------------");
	printf("\n Total de Ve�culos: %4d\t = Pneus: %4d", motos + carros, (motos * 2) + (carros * 4));
	printf("\n\n\n\n\n\n\n");
	system("pause");
	system("CLS");
	
	return 0;
}

void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
