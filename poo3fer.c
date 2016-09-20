#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double valorde_e()
{
    char num[50]="98773-e";
    printf("%3.5f",((double)atol(num))/pow(10,6));

}

itn main()
{
     valorde_e();
}
