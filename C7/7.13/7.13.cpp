#include<stdio.h>
double LRD(int n,double x)
{
	if(n==0)
	return(1);
	else if(n==1)
	return(x);
	else
	return(((2*n-1)*x-LRD(n-1,x)-(n-1)*LRD(n-2,x))/n);
}
main()
{
	int n;
	double x,ans;
	scanf("%d%lf",&n,&x);
	ans=LRD(n,x);
	printf("%lf\n",ans);
	return 0;
}
