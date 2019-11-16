#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	for(i=100;i<=999;i++)
	{	
		int k;
		int sum=0;
		k=i;
		while(k>0)
		{
			int a=k%10;
			sum+=pow((float)a,3);
			k/=10;
		}
		if(i==sum)
		printf("%d\n",i);
	}

return 0;
}
