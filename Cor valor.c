#include <windows.h>
#include <stdio.h>
void SetColorAndBackground(int ForgC, int BackC);
int main()
{
    int i;
    for (i=0; i<256;i++) {
    SetColorAndBackground(0,i);   //color value range 0 up-to 256
    printf("what is text background color \n");}
    SetColorAndBackground(11,1);
    
    printf("how about this?");
    getch();
    return 0;
}
void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
