#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,p=3.141592,c,s1,s2,v1,v2;
		printf("������Բ�İ뾶r=\n");
		scanf("%f",&r);

		c=2*p*r;
		printf("Բ�ܳ�=%.2f",c);
		s1=2*p*r*r;
		printf("Բ���=%.2f",s1);
		s2=4*p*r*r;
		printf("�����=%.2f",s2);
		v1=4*p*r*r*r/3;
		printf("�����=%.2f\n",v1);

		printf("������Բ���ĸ�h=\n");
		scanf("%f",&h);

		v2=2*p*r*r*h;
		printf("Բ�����=%.2f",v2);
		return 0;
		




















}