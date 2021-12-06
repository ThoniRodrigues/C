/* M�dias ponderadas de notas
 * Entrada: n�meros fornecidos pelo usu�rio
 * Processamento: c�lculos
 * Sa�da: a m�dia de cada aluno
 * Thoni Rodrigues
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpabuffer(void);

int main() 
{	
	char aluno1[20], aluno2[20];
	float notaa1, notaa2, notab1, notab2, media1, media2;
		
	// Configura��o de local
	setlocale(LC_ALL, "pt_BR");
	system("color 1F");
		
	system("CLS");
	printf("\n\n   C%clculo da m%cdia de notas de dois alunos\n",160,130);
	printf("\n\n   Digite o nome do primeiro aluno: ");
	scanf(" %20[^\n]", aluno1);
	limpabuffer();
	printf("\n   Nota da avalia%c%co 1: ",135,198);
	scanf("%f", &notaa1);
	limpabuffer();
	printf("   Nota da avalia%c%co 2: ",135,198);
	scanf("%f", &notaa2);
	limpabuffer();
	// c�lculo da m�dia ponderada
	media1 = (notaa1 * 0.4 + notaa2 * 0.6);
	
	printf("\n\n   Digite o nome do segundo aluno: ");
	scanf(" %20[^\n]", aluno2);
	limpabuffer();
	printf("\n   Nota da avalia%c%co 1: ",135,198);
	scanf("%f", &notab1);
	limpabuffer();
	printf("   Nota da avalia%c%co 2: ",135,198);
	scanf("%f", &notab2);
	limpabuffer();
	// c�lculo da m�dia ponderada
	media2 = (notab1 * 0.4 + notab2 * 0.6);
	system("CLS");
	
		
		// Sa�da dos dados
	
	printf("\n\n\n   M%cdia dos alunos: \n\n",130);
	
	printf("   Nome:\t\tNota 1 :\tNota 2 :\t M%cdia :\n", 130);
	printf("   --------------------------------------------------------------\n");
	printf("   %-20s\t%8.2f\t%8.2f\t%8.2f\n", aluno1, notaa1, notaa2, media1);
	printf("   %-20s\t%8.2f\t%8.2f\t%8.2f\n", aluno2, notab1, notab2, media2);	
	printf("   --------------------------------------------------------------\n\n");
	printf("\n   M%cdia dos dois alunos: %6.2f\n\n\n\n\n\n\n\n", 130,(media1 + media2)/2);
	system("pause");
	system("CLS");
	
	return 0;
}


void limpabuffer(void)
{
	char c;
	while ((c = getchar()) != '\n' && c != EOF);
}
