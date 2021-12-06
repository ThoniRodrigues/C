/* Verificar ingresso em curso de avia��o
 * Entrada: altura, idade, horas de voo, peso
 * Processamento: Verifica��o de crit�rios de aprova��o
 * Sa�da: aprovado ou reprovado
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
	float altura, idade, horasvoo, peso;
	char res[25];
	
	setlocale(LC_ALL,"portuguese");
	system("color 2f");
	system("MODE CON: COLS=80 LINES=40");
	
	// PEGAR DADOS

	printf("\n            -------------------------------------------------------\n\n");
	printf("             Candidato a curso de pilotagem  - verificar crit�rios");
	printf("\n\n            -------------------------------------------------------\n\n\n\n");
	
	printf("\n Digite a altura ...: ");
	scanf("%f", &altura);
	limpabuffer();
	printf("\n Digite a idade ....: ");
	scanf("%f", &idade);
	limpabuffer();
	printf("\n Digite horas de voo: ");
	scanf("%f", &horasvoo);
	limpabuffer();
	printf("\n Digite o peso .....: ");
	scanf("%f", &peso);
	limpabuffer();
	 	
	
	// FAZER CALCULOS
	
	if ((altura >= 1.75) && (idade >= 22 && idade <= 40) && (horasvoo >= 1600) && (peso >= 65 && peso <= 95))
		strcpy(res, "Candidato satisfat�rio");
	else 
		strcpy(res, "Candidato insatisfat�rio");
		
		// MOSTRAR RESULTADO

		printf("\n %s \n\n\n\n", res);
	 return 0;
}


void limpabuffer(void)   // FUN��O UTILIT�RIA PARA LIMPAR BUFFER DO TECLADO
{  
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
