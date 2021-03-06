/* Suspeito de um crime
* Entrada: cinco quest?es
* Processamento: grada??o das respostas
* Sa?da: classifica??o da suspei??o
* * Thoni Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	char perg[5][40] = {	"Telefonou para a v?tima?", 
							"Esteve no local do crime?", 
							"Mora perto da v?tima?", 
							"Devia para a v?tima?", 
							"J? trabalhou com a v?tima?" };
	
	char duv[5][60] =  {	"Responda 's' ou 'n'. N?o tente enrolar!", 
							"Voc? n?o entendeu? ? para responder 's' ou 'n'!", 
							"Quer ser preso?! Responda corretamente 's' ou 'n'.", 
							"Isso n?o ? brincadeira! Responda 's' ou 'n'.", 
							"N?o tenho muita paci?ncia. Responda 's' ou 'n'." };
	
	char susp[6][10] = {	"Inocente",	
							"Inocente", 
							"Suspeito",
							"C?mplice", 
							"C?mplice",
							"Assassino" };
	
	int ord1[5] = { 0, 1, 2, 3, 4 };
	int ord2[5] = { 0, 1, 2, 3, 4 };
	int i = 0, t = 0, n = 0, s = 0;
	char resp;
	setlocale(LC_ALL, "");
	
	// Embaralhamento da ordem das perguntas
	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		n = rand() % 5;
		t = ord1[n];
		ord1[n] = ord1[i];
		ord1[i] = t;
	}
	// Embaralhamento da ordem das admoesta??es
	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		n = rand() % 5;
		t = ord2[n];
		ord2[n] = ord2[i];
		ord2[i] = t;
	}
	
	// Mostra perguntas
	
	printf("\n Responda as perguntas abaixo com 's' ou 'n':\n\n");
	n = 0;
	for (i = 0; i < 5; i++)
	{
		t = ord1[i];
		s = ord2[i];
		printf("\n %s ", perg[t]);
		do
		{
		scanf(" %c", &resp);
		if (resp != 's' && resp != 'n')
			{
			printf("\n %s ", duv[s]);
			printf("\n %s ", perg[t]);
			s = rand() % 5;
			}
		} while (resp != 's' && resp != 'n');
		if (resp == 's')
			n = n + 1;
	}
	printf("\n\n\n Seu indice de suspeita ? %d - %s . \n\n\n\n", n, susp[n]);
	return 0;
}
