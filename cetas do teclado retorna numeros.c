#include <stdio.h>
//compilei pelo windows algumas op??es n?o funcionam no linux mas o molde ta pronto.
#include <windows.h>

//
//Esses c?digos abaixos s?o pelos pelo getch();
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
   printf("\n   ???????? Menu Principal ??????Ŀ\n");
   printf("   ?                              ?\n");
   //no lugar da tarja branca eu coloquei esse ? que no prompt do windows ? um quadrado.
   printf("   ? ? Retornar em main           ?\n");
   printf("   ?   Chamar outra funcao        ?\n");
   printf("   ?                              ?\n");
   printf("   ????????????????????????????????");
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
   printf("\n   ???????? Menu Principal ??????Ŀ\n");
   printf("   ?                              ?\n");
   printf("   ?   Retornar em main           ?\n");
   printf("   ? ? Chamar outra funcao        ?\n");
   printf("   ?                              ?\n");
   printf("   ????????????????????????????????");
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
   printf("\n   ????????? Menu  Funcao ???????Ŀ\n");
   printf("   ?                              ?\n");
   printf("   ? ? Retornar menu principal    ?\n");
   printf("   ?                              ?\n");
   printf("   ????????????????????????????????");
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
