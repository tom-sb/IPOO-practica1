#include <stdio.h>
#include <string.h>

void revert(char cad[], int n)
{
    if (n!=EOF)
    {
        printf("%c",cad[n]);
        revert(cad,n-1);
    }
    printf("\n");
}
int main()
{
    char palabra[]="hola";
    revert(palabra,strlen(palabra));
    return 0;
}
