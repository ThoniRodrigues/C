/* Resultados eleitorais
 * Entrada: votos v�lidos, brancos e nulos
 * Processamento: percentual de votos
 * Sa�da: votos no candidato 1, 2, brancos e nulos, e percentuais
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{	
	float total, cand1, cand2, brancos, nulos, semvoto;
	float pcand1, pcand2, pbrancos, pnulos, psemvoto;
	
	// Configura��o de local
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
		
	printf("\n\n  Resultado das elei��es\n");
	printf("\n Total de eleitores..: ");
	scanf(" %f", &total);
	limpabuffer();
	printf(" Votos no candidato 1: ");
	scanf(" %f",&cand1);
	limpabuffer();
	printf(" Votos no candidato 2: ");
	scanf(" %f",&cand2);
	limpabuffer();
	printf(" Votos brancos.......: ");
	scanf(" %f",&brancos);
	limpabuffer();
	printf(" Votos nulos.........: ");
	scanf(" %f",&nulos);
	limpabuffer();
	system("CLS");
	
	// C�lculos
	pcand1 = cand1 * 100 / total;
	pcand2 = cand2 * 100 / total;
	pbrancos = brancos * 100 / total;
	pnulos = nulos * 100 / total;
	semvoto = total - (cand1 + cand2 + brancos + nulos);
	psemvoto = semvoto * 100 / total;
	// Sa�da dos dados
	printf("\n Resultado das elei��es:\n\n");
	printf("\n Total de votos: %8.f", total);
	printf("\n\n Candidato    1: %8.f\t (%6.2f %%)", cand1, pcand1);
	printf("\n Candidato    2: %8.f\t (%6.2f %%)", cand2, pcand2);
	printf("\n Votos brancos : %8.f\t (%6.2f %%)", brancos, pbrancos);
	printf("\n Votos nulos   : %8.f\t (%6.2f %%)", nulos, pnulos);
	printf("\n\n Absten��es    : %8.f\t (%6.2f %%)", semvoto, psemvoto);
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
