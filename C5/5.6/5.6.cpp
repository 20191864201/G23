#include <stdio.h>
int main()
{
	int i=1;
	int j,sum;
	int produce=1;
	for (i=1;i<=20;i++)
	{
		for(j=i;j>0;j--)
		{
			produce*=j;		
		
		}
		sum+=produce;
	}

		printf("%d\n",sum);

return 0;
}