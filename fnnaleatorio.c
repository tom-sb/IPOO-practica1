#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nalea(int min, int max, int nn);

int main()
{
	int minimo,maximo,nn;
	printf("minimo\n");
	scanf("%d",&minimo);
	printf("maximo\n");
	scanf("%d",&maximo);
	printf("¿cuantos numeros quieres?\n");
	scanf("%d",&nn);

	nalea(minimo,maximo,nn);
	return 0;
}


void nalea(int min, int max,int nn)//minimo,maximo,cantidad de numeros al azar deseados
{
	int i,n;
	srand(time(NULL));
	for(i=min;i<=nn;i++)
	{
		
		n= min+rand() % ((max+min)-min);
		printf("%d\n",n);
	}
	
}
