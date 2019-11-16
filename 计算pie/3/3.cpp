#include <stdio.h>
int main()
{
	int i,j;
	float sum=1+1/3.0,pro=1/3.0,p;
	for(i=2,j=5;j<=999999;j+=2,j+=1)
	{
		pro*=(float)i/j;
		sum+=pro;
	}
	p=sum*2.0;

 printf("%f",p);













return 0;
}