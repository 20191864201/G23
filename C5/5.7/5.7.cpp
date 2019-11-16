#include <stdio.h>
int main()
{	
	int k;
	int sum1,sum2,sum3,sum;
	for (k=1;k<=100;k++)
	{
		sum1+=k;
	}
	for (k=1;k<=50;k++)
	{
		sum2+=k*k;
	}
	for (k=1;k<=10;k++)
	{
		sum3+=1/k;
	}
	printf("%d\n",sum=sum1+sum2+sum3);


return 0;
}