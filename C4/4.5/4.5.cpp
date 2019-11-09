#include"stdio.h"
#include"math.h"
main()
{
	int a;float b;
	scanf("%d",&a);
	if(1000<=a||a<=0)
    printf("重新输入正整数");
	   else    
		   b=sqrt(a);
    printf("%f",b);
}