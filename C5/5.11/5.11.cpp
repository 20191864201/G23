#include <stdio.h>
int main()
{	
	int i=1;
	float k=100.0;
	float sum=0;
	while (i<=10)
	{
		sum+=k;
		k/=2.0;
		i++;
		if (i==10)
		{
			printf("第十次反弹高度：%f\n",k);
		}
	}






return 0;
}