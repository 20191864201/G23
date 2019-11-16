#include<stdio.h>
#include<math.h>
int main()
{
	float r1=0.015,r2=0.021,r3=0.0275,r5=0.03,p1,p2,p3,p4,p5,p;
	p=1000;
	p1=p*(1+5*r5);
	p2=p*(1+2*r2)*(1+3*r3);
	p3=p*(1+3*r3)*(1+2*r2);
	p4=p*pow(1+r1,5);
	p5=p*pow(1+r1/4.0,20);
	printf("p1=%f,p2=%f,p3=%f,p4=%f,p5=%f",p1,p2,p3,p4,p5);return 0;
}