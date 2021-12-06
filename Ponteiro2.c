#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int x;
	int i = 100;
		
	int *p = &i;
	
	x = *p + 900;
	
	
	
	
	
	printf("\n O valor de i  = %d\n", i);
	printf("\n Endereço de i = %p\n", &i);
	printf("\n O valor de p  = %p\n", p);
	printf("\n O valor de x  = %d\n", x);
	
	return 0;
	
}
