#include <stdio.h>
//compilei pelo windows algumas opções não funcionam no linux mas o molde ta pronto.
#include <windows.h>

//
//Esses códigos abaixos são pelos pelo getch();
//e retornam um numero inteiro.
//Esse numero representa as teclas do teclado, (setas,enter,esc). 
//

#define acima 72
#define abaixo 80
#define esc 27
#define enter 13

void inicio1(void)
{
   system("cls");
   printf("\n   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄ¿\n");
   printf("   ³                              ³\n");
   //no lugar da tarja branca eu coloquei esse Û que no prompt do windows é um quadrado.
   printf("   ³ Û Retornar em main           ³\n");
   printf("   ³   Chamar outra funcao        ³\n");
   printf("   ³                              ³\n");
   printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
int ch;
ch=getch();
if (ch==esc)
   system("exit");
else if (ch==enter)
   main();
else if (ch==224)
   ch=getch();
   if (ch==acima)
      inicio02();
   else if (ch==abaixo)
      inicio02();
   else
      inicio1();
}
  inicio02()
{
   system("cls");
   printf("\n   ÚÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄÄ¿\n");
   printf("   ³                              ³\n");
   printf("   ³   Retornar em main           ³\n");
   printf("   ³ Û Chamar outra funcao        ³\n");
   printf("   ³                              ³\n");
   printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
int ch;
ch=getch();
if (ch==esc)
   system("exit");
else if (ch==enter)
   funcao_enter();
else if (ch==224)
   ch=getch();
   if (ch==acima)
      inicio1();
   else if (ch==abaixo)
      inicio1();
   else
      inicio02();
}
funcao_enter()
{
   system("cls");
   printf("\n   ÚÄÄÄÄÄÄÄÄ Menu  Funcao ÄÄÄÄÄÄÄÄ¿\n");
   printf("   ³                              ³\n");
   printf("   ³ Û Retornar menu principal    ³\n");
   printf("   ³                              ³\n");
   printf("   ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
int ch;
ch=getch();
if (ch==esc)
   inicio02();
else
      funcao_enter();
}
main ()
{
inicio1();
}
