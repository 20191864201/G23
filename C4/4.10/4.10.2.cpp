#include <math.h>
#include <stdio.h>
int main()
{
	int I,w,m;
	printf("请输入利润I=");
	scanf("%d",&I);
	m=I/100000;
	switch(m)
	{
		case 0:w=I*0.1;break;
		case 2:w=(I-100000)*0.075+10000;break;
		case 3:w=(I-200000)*0.05+17500;break;
		case 4:w=(I-200000)*0.05+17500;break;
		case 5:w=(I-400000)*0.03+23500;break;
		default:w=(I-1000000)*0.001+35500;break;
		case 6:w=(I-400000)*0.03+23500;break;
		case 7:w=(I-600000)*0.015+29500;break;
		case 8:w=(I-600000)*0.015+29500;break;
		case 9:w=(I-600000)*0.015+29500;break;
		case 10:w=(I-600000)*0.015+29500;break;
		case 1:w=I*0.1;break;
	}
	printf("应获得奖金数目w=%d\n",w);








}