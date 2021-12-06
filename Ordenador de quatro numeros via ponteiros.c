/* Ordena��o de quatro n�meros
 * Entrada: quatro n�meros inteiros e diferentes entre si
 * Processamento:ordena��o (m�todo bolha)
 * Sa�da: os n�meros em ordem
 * Thoni Rodrigues
 * Vers�o com o uso de fun��o e ponteiros
 */


#include <stdio.h>
#include <stdlib.h>
void troca(int *x, int *y);

int main()
{
	int a, b, c, d;
	int *x, *y;
	
	printf("\n Digite quatro numeros inteiros diferentes separados por espaco: \n\n\t");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("\n Os numeros digitados foram: %d, %d, %d %d", a, b, c, d);

	if (a > b) troca(&a, &b);
	if (b > c) troca(&b, &c);
	if (c > d) troca(&c, &d);
	
	if (a > b) troca(&a, &b);
	if (b > c) troca(&b, &c);
	
	if (a > b) troca(&a, &b);
	
	printf("\n Em ordem crescente fica   : %d, %d, %d, %d \n\n\n", a, b, c, d);
	
	return 0;
}

void troca(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
}
