#include <stdio.h>
int main()
{
	int i,t,sum;
	for(i=2;i<=1000;i++)
	{
		sum=0;
		for(t=1;t<i;t++)
		{
			if(i%t==0)
			{
				sum+=t;
			}
		}
	
		if(sum==i)
		{	printf("%d its facters are",i);
			for(t=1;t<i;t++)
			{	
				if(i%t==0)
				{
				printf("%d,",t);
				}		
			}
		printf("\b ");	
		printf("\n");
		}	
		
	}
		
	
	
		








return 0;
}