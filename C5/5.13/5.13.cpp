#include<stdio.h>
#include<math.h>
main()
{
	double x0,x1;
	float a;
	 printf("������Ҫ����ƽ����������");
	scanf("%f",&a);
	x0=123;
	x1=(x0+a/x0)/2.0;
	for(;;)
	{
		x0=x1;
		x1=(x0+a/x0)/2.0;
		if(fabs(x0-x1)<1e-5)
		{
			printf("%lf\n",x1);
			break;
		}
	}
	return 0;
} 