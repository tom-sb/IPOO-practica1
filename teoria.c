#include <stdio.h>

int strnd(char *s, char *t);

int main()
{
   char a[20]="arequipa",b[20]="qui";
   printf("%i\n",strnd(a,b));
}

int strnd(char *s, char *t)
{
   int rpta=0;
   for(;*s;s++)
   {
      if(*s==*t)
      {
         rpta=1;
         t++;  
      }
      else rpta=0;
   }
   return rpta;
}
