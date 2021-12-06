/* C�lculo das �reas de figuras geom�tricas
 * Entrada: valores dos lados
 * Processamento: escolha da figura, c�lculo do resultado
 * Sa�da: �rea da figura escolhida
 * Thoni Rodrigues
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{
	float n1, n2, resultado;
	int op;
	
	// Configura��es do ambiente
	setlocale(LC_ALL, "portuguese");
		
	// La�o principal
	op = 0;
	while(op != 5)
	{	
		// Menu de op��es
		puts("\n   C�lculo da �rea de figuras geom�tricas\n\n");
		puts("   1. Tri�ngulo\n");
		puts("   2. Quadrado\n");
		puts("   3. Ret�ngulo\n");
		puts("   4. Losango\n");
		puts("   5. Sair do programa\n\n");
		printf("\n   Escolha a op��o desejada: ");
		scanf("%d", &op);
		limpabuffer();
		
		// C�lculo das �reas
		switch(op) 
		{
			case 1: // Tri�ngulo
			{
				system("CLS");
				printf("\n �rea do tri�ngulo \n\n");
				printf("\n Digite o valor da base: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o valor da altura: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = (n1 * n2)/2;
				printf("\n\n A �rea �: %10.4f",resultado);
				break;
			}
			case 2: // Quadrado
			{
				system("CLS");
				printf("\n �rea do quadrado \n\n");
				printf("\n Digite o valor do lado: ");
				scanf("%f", &n1);
				limpabuffer();
				resultado = n1 * n1;
				printf("\n\n A �rea �: % 10.4f",resultado);
				break;
			}
			case 3: // Ret�ngulo
			{
				system("CLS");
				printf("\n �rea do ret�ngulo \n\n");
				printf("\n Digite o valor da base: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o valor da altura: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = n1 * n2;
				printf("\n\n A �rea �: % 10.4f",resultado);
				break;
			}
			case 4: // Losango
			{
				system("CLS");
				printf("\n �rea do losango \n\n");
				printf("\n Digite o valor da diagonal menor: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o valor da diagonal maior: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = (n1 * n2)/2;
				printf("\n\n A �rea �: % 10.4f",resultado);
				break;
			}
			case 5: // Sa�da
			{
			}
			default : // Nenhuma das op��es: volta ao menu
			{
				break;
			}	
		}
		if(op != 5)
			{
			puts("\n\n\n Pressione ENTER para continuar...");
			getchar();
			system("CLS");
			}
	}
	return 0;
}

void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
