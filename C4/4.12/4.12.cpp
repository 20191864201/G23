#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main(int argc, char *argv[])
{
int x,y,d1,d2,d3,d4,d,h,r,D1,D2,D3,D4;
printf("请输入坐标x,y");
scanf("%f%f",&x,&y);
r=1;
D1=(x-2)*(x-2)+(y-2)*(y-2);
d1=sqrt(D1);
D2=(x+2)*(x+2)+(y-2)*(y-2);
d2=sqrt(D2);
D3=(x+2)*(x+2)+(y+2)*(y+2);
d3=sqrt(D3);
d4=(x-2)*(x-2)+(y+2)*(y+2);
	if(y>0)
		{
		if(d1>d2)
		d=d2;
		else
		d=d1;
		}
	if(y<0)
		{
		if(d3>d4)
		d=d4;
		else
		d=d3;
		}
		if(d<=r)
		h=10;
		if(d>r)
		h=0;
			printf("\n此处高度为%d",h);
return 0;
}
