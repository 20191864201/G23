#include<stdio.h>
#include<math.h> 
double ND(double a,double b,double c,double d)
{
    double x=1,x0;
    do
    {
        x0=x;
        x=x0-(((a*x+b)*x+c)*x+d)/((3*a*x+2*b)*x+c);
    }while(fabs(x-x0)>=1e-5);
    return x;
}

main()
{
	double a,b,c,d,ans;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	ans=ND(a,b,c,d);
	printf("%lf\n",ans);
	return 0;
}
