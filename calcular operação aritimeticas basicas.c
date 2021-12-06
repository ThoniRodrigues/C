/* C�lculo das quatro opera��es aritim�ticas
 * Entrada: dois n�meros
 * Processamento: escolha da opera��o, c�lculo do resultado
 * Sa�da: o resultado da opera��o escolhida
 * Thoni Rodrigues
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() {
	 
	float n1, n2, resultado;
	int op;
	
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
		
	op = 0;
	while(op != 5)
	{	// La�o principal
		
		puts("\n   As quatro opera��es:\n\n");
		puts("   1. Adi��o\n");
		puts("   2. Subtra��o\n");
		puts("   3. Multiplica��o\n");
		puts("   4. Divis�o\n");
		puts("   5. Sair do programa\n\n");
		printf("\n   Escolha a opera��o desejada: ");
		scanf("%d", &op);
		limpabuffer();
				
		switch(op) // Processamento da opera��o escolhida
		{
			case 1: // Adi��o
			{
				system("CLS");
				printf("\n Opera��o de adi��o \n\n");
				printf("\n Digite o primeiro n�mero: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o segundo n�mero: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = n1 + n2;
				printf("\n\n O Resultado �: %10.4f",resultado);
				break;
			}
			case 2: // Subtra��o
			{
				system("CLS");
				printf("\n Opera��o de subtra��o \n\n");
				printf("\n Digite o minuendo: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o subtraendo: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = n1 - n2;
				printf("\n\n O Resultado �: % 10.4f",resultado);
				break;
			}
			case 3: // Multiplica��o
			{
				system("CLS");
				printf("\n Opera��o de multiplica��o \n\n");
				printf("\n Digite o primeiro fator: ");
				scanf("%f", &n1);
				limpabuffer();
				printf("\n Digite o segundo fator: ");
				scanf("%f", &n2);
				limpabuffer();
				resultado = n1 * n2;
				printf("\n\n O Resultado �: % 10.4f",resultado);
				break;
			}
			case 4: // Divis�o
			{
				do
				{
					system("CLS");
					printf("\n Opera��o de divis�o \n\n");
					printf("\n Digite o divisor: ");
					scanf("%f", &n1);
					limpabuffer();
					printf("\n Digite o dividendo: ");
					scanf("%f", &n2);
					limpabuffer();
					if(n2 == 0)  // Teste para evitar divis�o por zero
						{
							printf("O dividendo n�o pode ser 0");
							setbuf(stdin, NULL);
							getchar();
						}
				}
				while(n2 == 0);
				resultado = n1 / n2;
				printf("\n\n O Resultado �: % 10.4f",resultado);
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
		if(op != 5) // Pausa, se n�o for sair
		{
			puts("\n\n\n Pressione ENTER para continuar...");
			setbuf(stdin, NULL);
			getchar();
			system("CLS");
			}
	}
	return 0;
}

void limpabuffer(void)   // Fun�ao utilit�ria para limpar o buffer do teclado
{  
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
