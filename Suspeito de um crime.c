/* Suspeito de um crime
* Entrada: cinco questões
* Processamento: gradação das respostas
* Saída: classificação da suspeição
* * Thoni Rodrigues
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	char perg[5][40] = {	"Telefonou para a vítima?", 
							"Esteve no local do crime?", 
							"Mora perto da vítima?", 
							"Devia para a vítima?", 
							"Já trabalhou com a vítima?" };
	
	char duv[5][60] =  {	"Responda 's' ou 'n'. Não tente enrolar!", 
							"Você não entendeu? É para responder 's' ou 'n'!", 
							"Quer ser preso?! Responda corretamente 's' ou 'n'.", 
							"Isso não é brincadeira! Responda 's' ou 'n'.", 
							"Não tenho muita paciência. Responda 's' ou 'n'." };
	
	char susp[6][10] = {	"Inocente",	
							"Inocente", 
							"Suspeito",
							"Cúmplice", 
							"Cúmplice",
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
	// Embaralhamento da ordem das admoestações
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
	printf("\n\n\n Seu indice de suspeita é %d - %s . \n\n\n\n", n, susp[n]);
	return 0;
}
