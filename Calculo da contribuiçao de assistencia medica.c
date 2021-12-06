/* C�lculo da contribui��o de assist�ncia m�dica
 * Entrada: sal�rioo bruto, idade e sexo
 * Processamento: c�lculo do percentual
 * Sa�da: o valor da assist�ncia m�dica
 * Thoni Rodrigues
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void limpabuffer(void);

int main ()
{

	// VARIAVEIS
	float salariob, idade, valorfinal, desconto;
	char sexo;
	char sexo1[10];
	
	setlocale(LC_ALL,"portuguese");
	system("color 2f");
	system("MODE CON: COLS=80 LINES=40");
	
	// PEGAR DADOS

	printf("\n                -----------------------------------------------\n\n");
	printf("                 Calcular assist�ncia M�dica de um Funcion�rio");
	printf("\n\n                -----------------------------------------------\n\n");
	
	printf("\n Digite o s�lario bruto do funcion�rio: ");
	scanf("%f", &salariob);
	limpabuffer();
	printf("\n Digite a idade: ");
	scanf("%f", &idade);
	limpabuffer();
	do
	{
		printf("\n Digite o sexo (m ou f): ");
		scanf("%c", &sexo);
		limpabuffer();
 	} while (sexo != 'm' && sexo !='f');
 	
	if (sexo == 'm')
		strcpy(sexo1, "masculino");
	else
		strcpy(sexo1, "feminino");

	// FAZER CALCULOS
	
	if (sexo == 'm')
		{
		if (idade <= 20)
			desconto = 7;
		else if (idade <= 40)
			desconto = 10;
		else 
			desconto = 15;
		}
	else 
		{
		if (idade <= 20)
			desconto = 5;
		else if (idade <= 40)
			desconto = 7;
		else 
			desconto = 10;
		}
		
	// MOSTRAR RESULTADO

	valorfinal = (salariob*desconto) / 100;
	printf("\n O valor da assist�ncia m�dica � de: %3.2f (%3.2f%%)\n para a idade de %3.0f anos, sexo %s. \n\n\n\n", valorfinal, desconto, idade, sexo1);
	 return 0;
}


void limpabuffer(void)   // FUN��O UTILIT�RIA PARA LIMPAR BUFFER DO TECLADO
{  
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
