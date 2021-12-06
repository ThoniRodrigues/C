#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

float media (float lista[ ] , int tamanho) 
{ 
	int i ;
	float m = 0;
	for (i = 0; i < tamanho; i++)
 		{
 			m += lista[i];
 			printf("\n%d", i);
 		}
	return (m / tamanho);
}

int main()
{
	float notas[TAMANHO], m;
	int i = 0;

	do
	{
		printf("\n Digite a nota do aluno %d : ", i + 1);
		scanf("%f", &notas[i]);
	} 	while (notas[i++] >= 0);
	i--;

	m = media (notas, i);
	printf("\n Media das notas: %.2f", m);
	return 0;
}


