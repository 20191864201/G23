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
			printf("��ʮ�η����߶ȣ�%f\n",k);
		}
	}






return 0;
}