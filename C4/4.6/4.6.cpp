#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	{
	if(x<10){ 
	    if(x<1) y=x;
		else    y=2*x-1;
		}
	else        y=3*x-11;
    }
	printf("x=%d,y=%d\n",x,y);
	return 0;
}