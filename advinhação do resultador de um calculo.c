/* Adivinha��o do resultado de um c�lculo
 * Entrada: n�meros fornecidos pelo usu�rio
 * Processamento: c�lculos
 * Sa�da: o resultado dos c�lculos
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{	
	float numero, calculo;
	
	
	// Configura��o de local
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
		
	printf("\n\n  Brincadeira de adivinha��o\n");
	printf("\n Siga as instru��es (tecle enter quando estiver pronto):\n ");
	getchar();
	printf("\n Pense um n�mero... ");
	getchar();
	printf("\n Multiplique o n�mero por 2...");
	getchar();
	printf("\n Some 6 ao resultado...");
	getchar();
	printf("\n Divida o resultado por 2. Quanto deu?: ");
	scanf(" %f",&calculo);
	limpabuffer();
		
	// C�lculos
	numero = (calculo * 2 - 6)/ 2;
	
	// Sa�da dos dados
	
	printf("\n Voc� pensou o n�mero %8.f", numero);
	
	printf("\n\n\n\n\n\n\n----------------------------------\n");
	system("pause");
	system("CLS");
	
	return 0;
}


void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
