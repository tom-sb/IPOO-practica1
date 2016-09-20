#include <stdio.h>

void revert(char cad[], int n);
int leni(char *s);

int main()
{
    char palabra[]="hola";
    revert(palabra,leni(palabra));
    return 0;
}


void revert(char cad[], int n)
{
    if (n!=EOF)
    {
        printf("%c",cad[n]);
        revert(cad,n-1);
    }
    printf("\n");
}

int leni(char *s)
{
   int cont=0;
   for(;*s;s++) cont++;
   return cont;
}
