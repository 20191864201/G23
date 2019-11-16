#include <stdio.h>
int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	double sum;
	int counter=2;
	while (1)
	{	
		a1=1;a2=2;b1=2;b2=3;
		a3=a1+a2;
		b3=b1+b2;
		sum=b1/a1+b2/a2;
		sum+=b3/a3;
		counter++;
		if(counter>=20)
			break;
		else
		a1=a2;
		a2=a3;
		b1=b2;
		b2=b3;
		
		}	


    printf("前20项的和为：%f\n",sum);








return 0;
}