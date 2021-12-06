/* Thoni Rodrigues */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void limpabuffer(void); 	

int main()
{
	char nome[TAM][14];  
	float preco[TAM];		
	int i = 0,  indice = 0;
	float maior = 0, novopreco = 0;	
	// entrada
	printf("\n Preco dos calcados em oferta\n\n\n");
	for (i = 0; i< TAM; i++)
	{
		printf("\n Digite o nome do calcado %d: ", i + 1);
		scanf(" %13[^\n]", nome[i]);			
		limpabuffer(); 							
		printf("\n Digite o preco do %s: ", nome[i]);
		scanf(" %f", &preco[i]);	
		limpabuffer();
	
		if (preco[i] > maior) 	
		{
			maior = preco[i];	
			indice = i;		
		}
	}
	// processamento
	novopreco = (maior - (maior * 10 / 100));
	// saida
	system("CLS");
	printf("\n\n\n Preco dos calcados em oferta \n\n");
	for (i = 0; i < TAM; i++)
	{
		printf("\n Modelo: %-14s \tPreco: %6.2f", nome[i], preco[i]);
	}
	printf("\n\n Mais caro: %-14s \n Preco normal: %6.2f \tPreco com desconto: %6.2f", nome[indice], preco[indice], novopreco);
	system("pause > NULL");
	return 0;
}
	
void limpabuffer(void) 
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
