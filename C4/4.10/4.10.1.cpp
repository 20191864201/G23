#include <math.h>
#include <stdio.h>
int main()
{
	int I,w;
	printf("请输入I=");
	scanf("%d",&I);
	if (I<=100000)
		w=I*0.1;
		else if (I>100000&&I<=200000)
		w=(I-100000)*0.075+10000;
		else if (I>200000&&I<=400000)
		w=(I-200000)*0.05+17500;
		else if (I>400000&&I<=600000)
		w=(I-400000)*0.03+27500;
		else if (I>600000&&I<1000000)
		w=(I-600000)*0.015+33500;
		else if (I>=1000000)
		w=(I-1000000)*0.01+39500;
		printf("应获得奖金总数w=%d\n",w);
		return 0;
























}