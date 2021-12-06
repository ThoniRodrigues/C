#include <stdio.h>

void troca(int *i, int *j)
{
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
	
}

int main()
{
	int a = 1;
	int b = 10;
	
	troca (&a,&b);
	
	printf("\ta = %d \n \t b = %d", a, b);
	return 0;
}
