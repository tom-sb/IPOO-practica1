#include<stdio.h>

long fact(int n);

int main()
{
	int numero;
	printf("coloque el numero\n");
	scanf("%i",&numero);
	
	printf("el factorial del numero es: \n%li\n",fact(numero));

return 0;
}

long fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{		
		return (n*fact(n-1));
	}
}
