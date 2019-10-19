#include<stdio.h>
#include<math.h>
int main()
{
	int d=300000,p=6000;
	double r=0.01,m;
	m=log(p/(p-d*r))/log(1+r);
		printf("m=%.2lf\n",m);
		return 0;
	






























}