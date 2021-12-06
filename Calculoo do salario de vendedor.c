/* C�lculoo do sal�rio de vendedor
 * Entrada: sal�rio bruto, vendas
 * Processamento: c�lculo de comiss�es e vendas
 * Sa�da: sal�rio l�quido, acr�scimos e descontos
 * Autor: Thoni Rodrigues
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main ()
{

	// VARIAVEIS
	float salariob, salariot, vendas, comparcial, desconto;
	float c1, c2, c3, c4;
	char res[25];
	
	setlocale(LC_ALL,"portuguese");
	system("color 1f");
	system("MODE CON: COLS=80 LINES=50");
	
	// PEGAR DADOS

	printf("\n            -------------------------------------------------------\n");
	printf("            *             Calculo de salario de vendedor          *");
	printf("\n            -------------------------------------------------------\n\n");
	
	printf("\n Digite o salario  bruto : ");
	scanf("%f", &salariob);
	limpabuffer();
	printf("\n Digite o total de vendas: ");
	scanf("%f", &vendas);
	limpabuffer();
	system("CLS");
		
	printf("\n            -------------------------------------------------------\n");
	printf("            *             Calculo de salario de vendedor          *");
	printf("\n            -------------------------------------------------------\n\n");
	
	
	// Comiss�o sobre vendas
	printf("\n Comissoes:");
	comparcial = 0;
	c4 = c3 = c2 = c1 = 0;
	if (vendas > 25000)
	{
		c4 = ((vendas - 25000) * 0.15);
		c3 = ( 20000 * 0.10);
		c2 = (4500 * .05); 
		c1 = (500 * .02);
		comparcial = c4 + c3 + c2 + c1;
		printf("\n Comissao  acima  de R$ 25.000,00 a 15%%: %10.2f", c4);
		printf("\n Entre R$ 5.000,01 e R$ 25.000,00 a 10%%: %10.2f", c3);
		printf("\n Entre R$   500,01 e R$  5.000,00 a 10%%: %10.2f", c2);
		printf("\n Comissao at� R$ 500,00.......... a  2%%: %10.2f", c1);
		printf("\n\n Comissao total....................... : %10.2f", comparcial);
	}	
	else 	if (vendas > 5000)
			{
				c4 = 0;
				c3= ((vendas - 5000) * 0.10);
				c2 = (4500 * .05); 
				c1 = (500 * .02);
				comparcial = c3 + c2 + c1;
				printf("\n Comissao  acima  de R$ 25.000,00 a 15%%: %10.2f", c4);
				printf("\n Entre R$ 5.000,01 e R$ 25.000,00 a 10%%: %10.2f", c3);
				printf("\n Entre R$   500,01 e R$  5.000,00 a 10%%: %10.2f", c2);
				printf("\n Comissao at� R$ 500,00.......... a  2%%: %10.2f", c1);
				printf("\n\n Comissao total....................... : %10.2f", comparcial);
			}
	
			else 	if (vendas > 500)
					{
						c4 = c3 = 0;
						c2 = ((vendas - 500) * 0.05);
						c1 = (500 * .02);
						comparcial = c2 + c1;
						printf("\n Comissao  acima  de R$ 25.000,00 a 15%%: %10.2f", c4);
						printf("\n Entre R$ 5.000,01 e R$ 25.000,00 a 10%%: %10.2f", c3);
						printf("\n Entre R$   500,01 e R$  5.000,00 a 10%%: %10.2f", c2);
						printf("\n Comissao at� R$ 500,00.......... a  2%%: %10.2f", c1);
						printf("\n\n Comissao total....................... : %10.2f", comparcial);
					}
					else 
					{
						c4 = c3 = c2 = 0;
						c1 = vendas * 0.02;
						comparcial = c1;
						printf("\n Comissao  acima  de R$ 25.000,00 a 15%%: %10.2f", c4);
						printf("\n Entre R$ 5.000,01 e R$ 25.000,00 a 10%%: %10.2f", c3);
						printf("\n Entre R$   500,01 e R$  5.000,00 a 10%%: %10.2f", c2);
						printf("\n Comissao at� R$ 500,00.......... a  2%%: %10.2f", c1);
						printf("\n\n Comissao total....................... : %10.2f", comparcial);
					}
 	
	printf("\n --------------------------------------------------\n\n");					
	//	C�lculos dos descontos sobre o sal�rio
	
	salariot = salariob + comparcial;
	
	printf("\n Descontos:");
	if (salariot > 4663.75)
	{
		c4 = 513.01;
		c3 = ((4663.75 - 2331.89) * 0.11);
		c2 = ((2331.88 - 1339.13) * .09);
		c1 = (1339.12 * .08);
		desconto = c4 + c3 + c2 + c1;
		printf("\n Desconto  acima  de R$ 4.663,75 (fixo): %10.2f", c4);
		printf("\n Entre R$ 2.331,89 e R$ 4.663,75 a 11 %%: %10.2f", c3);
		printf("\n Entre R$ 1.339,13 e R$ 2.331,88 a 09 %%: %10.2f", c2);
		printf("\n Desconto at� R$ 1.339,12....... a 08 %%: %10.2f", c1);
		printf("\n\n Desconto total....................... : %10.2f", desconto);
	}
	else 	if (salariot > 2331.88)
	  		{
			c4 = 0;
			c3 = ((salariot - 2331.88) * 0.11);
			c2 = ((2331.88 - 1339.13) * .09);
			c1 = (1339.12 * .08);
			desconto = c4 + c3 + c2 + c1;
			printf("\n Desconto  acima  de R$ 4.663,75 (fixo): %10.2f", c4);
			printf("\n Entre R$ 2.331,89 e R$ 4.663,75 a 11 %%: %10.2f", c3);
			printf("\n Entre R$ 1.339,13 e R$ 2.331,88 a 09 %%: %10.2f", c2);
			printf("\n Desconto at� R$ 1.339,12....... a 08 %%: %10.2f", c1);
			printf("\n\n Desconto total....................... : %10.2f", desconto);
			}
			else 	if (salariot > 1339.12)
					{
						c4 = c3 =0;
						c2 = ((salariot - 1339.12) * 0.09);
						c1 = (1339.12 * .08);
						desconto = c4 + c3 + c2 + c1;
						printf("\n Desconto  acima  de R$ 4.663,75 (fixo): %10.2f", c4);
						printf("\n Entre R$ 2.331,89 e R$ 4.663,75 a 11 %%: %10.2f", c3);
						printf("\n Entre R$ 1.339,13 e R$ 2.331,88 a 09 %%: %10.2f", c2);
						printf("\n Desconto at� R$ 1.339,12....... a 08 %%: %10.2f", c1);
						printf("\n\n Desconto total....................... : %10.2f", desconto);
					}
					else 
						{
						c4 = c3 = c2 = 0;
						c1 = (salariot * .08);
						desconto = c4 + c3 + c2 + c1;
						printf("\n Desconto  acima  de R$ 4.663,75 (fixo): %10.2f", c4);
						printf("\n Entre R$ 2.331,89 e R$ 4.663,75 a 11 %%: %10.2f", c3);
						printf("\n Entre R$ 1.339,13 e R$ 2.331,88 a 09 %%: %10.2f", c2);
						printf("\n Desconto at� R$ 1.339,12....... a 08 %%: %10.2f", c1);
						printf("\n\n Desconto total....................... : %10.2f", desconto);
						}
						
	printf("\n --------------------------------------------------\n\n");
	printf("\n\n Resumo:\n");
	printf("\n Salario bruto..................... (a): %10.2f", salariob);
	printf("\n Total de vendas................... (b): %10.2f", vendas);
	printf("\n Comiss�o sobre vendas............. (c): %10.2f\n", comparcial);
	printf("\n Total de rendimentos............ (a+c): %10.2f", salariot);
	printf("\n Total de descontos................ (d): %10.2f", desconto);
	printf("\n Salario liquido............... (a+c-d): %10.2f\n\n\n\n", salariot - desconto);
	
	 return 0;
}


void limpabuffer(void)   // FUN��O UTILIT�RIA PARA LIMPAR BUFFER DO TECLADO
{  
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
