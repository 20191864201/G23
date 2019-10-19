#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float p,r=0.07;
	for(n=1;n<=10;n++)
	p=pow((r+1),n);
	printf("p=%5.2f\n",p);
			return 0;




}