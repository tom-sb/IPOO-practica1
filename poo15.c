#include <stdio.h>

int main()
{

	float fah,cel;
	float lower,upper,step;
	
	lower=0;
	upper=300;
	step=20;

	fah=upper;
	while(fah>=lower){
		cel=5*(fah-32)/9;
		printf("%f\t%f\n",fah,cel);
		fah=fah-step;
		
	}
}
