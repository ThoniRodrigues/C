/* C�lculo do sal�rio de dois vendedores
 * Entrada: nome, sal�rio bruto, vendas
 * Processamento: c�lculos
 * Sa�da: nome e sal�rio l�quido
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.c>
#include <conio.h>

void limpabuffer(void);

int main()
{
	char vend1[20], vend2[20], mens[40];
	float sal1, sal2, venda1, venda2, liq1, liq2;
	
	// Configura��o de local

	setlocale(LC_ALL, "Portuguese_Brasil.1252");
	//system("CHCP 65001");
	//system("MODE CON: CP SELECT=850");
	system("color 1F");

	system("CLS");
	printf("\n\n   C%clculo do sal%crio de dois vendedores\n",160,160);
	printf("\n\n   Digite o nome do primeiro vendedor: ");
	scanf(" %20[^\n]", vend1);
	limpabuffer();
	printf("\n   Sal%crio bruto: ",160);
	scanf(" %f", &sal1);
	limpabuffer();
	printf("   Total de vendas: ");
	scanf(" %f", &venda1);
	limpabuffer();
	// c�lculo do sal�rio
	liq1 = (sal1 - sal1 * 0.085) + ( 0.05 * venda1);

	printf("\n\n   Digite o nome do segundo vendedor: ");
	//setlocale(LC_ALL, "pt_BR.iso-8859-1");
	scanf(" %20[^\n]", vend2);
	limpabuffer();
	printf("\n   Sal&crio bruto: ",160);
	setbuf(stdin, NULL);
	scanf(" %f", &sal2);
	limpabuffer();
	printf("   Total de vendas: ");
	scanf(" %f", &venda2);
	limpabuffer();
	// c�lculo do sal�rio
	liq2 = (sal2 - sal2 * 0.085) + ( 0.05 * venda2);


	// Sa�da dos dados

	printf("\n\n\n   Sal%crio dos vendedores\n\n\n\n",160);

	printf("   Nome ....... : %20s\t%20s\n", vend1,vend2);
	printf("   -----------------------------------------------------------------\n");
	printf("   Sal. Bruto.. :   \t  %12.2f\t\t%12.2f\n",sal1,sal2);
	printf("   Desconto INSS:   \t  %12.2f\t\t%12.2f (8.5%%)\n", (sal1 * .085), (sal2 * .085));
	printf("   Vendas ..... :   \t  %12.2f\t\t%12.2f\n", venda1, venda2);
	printf("   Comiss%co ....:   \t  %12.2f\t\t%12.2f (5%%)\n", 198, venda1 * 0.05, venda2 * 0.05);
	printf("   Sal. Liq.....:   \t  %12.2f\t\t%12.2f\n", liq1, liq2);
	printf("   -----------------------------------------------------------------\n\n\n\n\n\n\n");

	system("pause");
	system("CLS");

	return 0;
}

void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}



