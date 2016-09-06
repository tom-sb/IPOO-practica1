#include <stdio.h>
int stt(char s[])
{
	int i;
	i=0;
	while(s[i]!='\0')
		++i;
	return i;
}

main()
{
    printf("%d",stt("123456789"));
}
