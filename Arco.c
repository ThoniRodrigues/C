//========================
//this progs wrote in C programming language.
//Ubuntu...used only 65,66,67,68 values instead of "27,91,65" , "27,91,66" ...
#include <stdio.h>
#include <conio.h>
//--------------------------
int main()

{
      char ch;
  do{
 
        ch=getch();
        if(ch!='\0')
        {
          ch=getch();
          if(ch=='H')
              printf("UP\n");
                 else    if(ch=='P')
              printf("DOWN\n");
                   else    if(ch=='M')
              printf("RIGHT\n");
                     else   if(ch=='K')
              printf("LEFT\n");
        }
  }while(ch!='e');
 
    return 0;
}
