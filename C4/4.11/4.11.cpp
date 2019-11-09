#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 int a,b,c,d,tem;
 printf("请输入四个整数");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 	if(a>b)
 	{tem=a;a=b;b=tem;}
 	if(a>c)
 	{tem=a;a=c;c=tem;}
 	if(a>d)
 	{tem=a;a=d;d=tem;}
 	if(b>c)
 	{tem=b;b=c;c=tem;}
 	if(b>d)
 	{tem=b;b=d;d=tem;}
 	if(c>d)
	{tem=c;c=d;d=tem;}
	printf("%d%d%d%d",a,b,c,d);
	
 
	
	return 0;
}