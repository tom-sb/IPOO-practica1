#include <stdio.h>
int indexstr(char *s, char t)
{
	int len = 0;
	int pos=-1;
	for (; *s != '\0'; s++)		
		if (*s==t){
		pos=len;
		len++;
		}
		else len++;
	return pos;
}
int main()
{
	char str[20];
	char a='o';
	printf("escribe la palabra\n");
	scanf("%s",str);
	printf("%d\n", indexstr(str,a));
}
