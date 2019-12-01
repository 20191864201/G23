#include <stdio.h>
#include <math.h>
int main()
{	int a,b,c;
	int daita;
	int x1,x2;
	int one_x(int a,int b, int c);
	int tow_x(int a,int b,int c);
	int no_x(int a,int b,int c);
	printf("求解ax2+bx+c=0的解");
	printf("请输入a，b，c的值");
	printf("a=");
	scanf("%d",&a);
	printf("\nb=");
	scanf("%d",&b);
	printf("\nc=");
	scanf("%d",&c);
	daita=b*b-4*a*c;
	if(daita<0)
	{
		no_x(a,b,c);
	}
	if(daita==0)
	{
		one_x(a,b,c);
		x1=one_x(a,b,c);
		printf("解只有一个，为x=%d\n",x1);
	}
	if(daita>0)
	{
		tow_x(a,b,c);
		x1=tow_x(a,b,c);
		x2=c/(a*x1);
		printf("方程有两解：x1=%d，x2=%d",x1,x2);
	}

	
return 0;




}
int one_x(int a,int b, int c)
{
	int x;
	x=(-b+sqrt(b*b-4*c))/(2*a);
	return x;
}
int tow_x(int a,int b,int c)
{
	int x;
	x=(double)(-b+sqrt(b*b-4*c))/(2*a);

	return x;
}
int no_x(int a,int b,int c)
{

printf("无解");
return 0;
}

