#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,p=3.141592,c,s1,s2,v1,v2;
		printf("请输入圆的半径r=\n");
		scanf("%f",&r);

		c=2*p*r;
		printf("圆周长=%.2f",c);
		s1=2*p*r*r;
		printf("圆面积=%.2f",s1);
		s2=4*p*r*r;
		printf("球面积=%.2f",s2);
		v1=4*p*r*r*r/3;
		printf("球体积=%.2f\n",v1);

		printf("请输入圆柱的高h=\n");
		scanf("%f",&h);

		v2=2*p*r*r*h;
		printf("圆柱体积=%.2f",v2);
		return 0;
		




















}