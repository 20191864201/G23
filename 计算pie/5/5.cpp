#include <stdio.h>
#include <math.h>
int main ()
{
	int i;
	float pi,sum=0;
	for (i=1;i<=9999;i+=2)
	{
	
		sum+=(double)1/pow(i,2);
	
	
	
	}

	pi=sqrt(8*sum);
 printf("%f\n",pi);













return 0;
}