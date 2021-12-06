/* C�lculo do peso ideal
 * Entrada: sexo, altura
 * Processamento: c�lculo do peso ideal
 * Sa�da: o peso ideal
 * Thoni Rodrigues
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{
	 
	float peso, altura, resultado;
	int op;
	char sexo;
	
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
		
	op = 0;
	while(op != 3)
	{	// La�o principal
		
		do   // Enquanto entrada n�o for 1, 2 ou 3 n�o sai do menu
		{
		system("CLS");
		printf("\n   C�lculo do peso ideal por sexo e altura:\n\n\n");
		printf("        1. Peso ideal masculino\n\n");
		printf("        2. Peso ideal feminino\n\n");
		printf("        3. Sair do programa\n\n\n");
		printf("   Digite sua op��o: ");
		scanf(" %d", &op);
		limpabuffer();
		} while (op < 1 || op > 3);
		
		if (op !=3)
		{
			do    // Valida altura entre 1 e 2.5 metros
			{
				printf("\n   Digite a altura (entre 1 e 2,5 metros): ");
				scanf(" %f", &altura);
				limpabuffer();
			} while (altura < 1 || altura > 2.5);
				
			printf("\n-----------------------------------------------------------------\n");
			switch(op) // Processamento da opera��o escolhida
			{
				case 1: // Peso ideal masculino
				{
					resultado = (72.2 * altura) - 58;
					printf("\n  O peso ideal masculino �: %6.2f quilos",resultado);
					break;
				}
			
				case 2: // Peso ideal feminino
				{
					resultado = (62.1 * altura) - 44.7;
					printf("\n  O peso ideal feminino �: %6.2f quilos.",resultado);
					break;
				}
				
				default : // Nenhuma das op��es: volta ao menu
				{
				break;
				}	
			}
			printf("\n\n-----------------------------------------------------------------\n");
			if(op != 3) // Pausa, se n�o for sair
			{
				printf("\n\n\n\n Pressione ENTER para continuar...");
				getchar();
				system("CLS");
			}
		}
	}
	return 0;
}

void limpabuffer(void)   // Fun�ao utilit�ria para limpar o buffer do teclado
{  
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}

