#include "stdio.h"
#include "math.h"

int main(int argc, char* argv[])
{
	int y,m,d,th;
	int m1=31,m3=31,m5=31,m7=31,m8=31,m10=31,m12=31,m4=30,m6=30,m9=30,m11=30,m2;

		printf("请输入年月日");
		scanf("%d %d %d",&y,&m,&d);
		
	
		while(m>12)
			{	
				printf("月份错误，请重新输入年月日");
				scanf("%d %d %d",&y,&m,&d);
			}
		
		
			while(d>31)
			{
				printf("本月没有这一天,请重新输入年月日");
				scanf("%d %d %d",&y,&m,&d);
		
			}

		if(y%4==0&&y%100!=0||y%400==0)
			m2=29;
		else 
			m2=28;
		switch(m)
		{
			case 1:th=d;break;
			case 2:th=m1+d;break;
			case 3:th=m1+m2+d;break;
			case 4:th=m1+m2+m3+d;break;
			case 5:th=m1+m2+m3+m4+d;break;
			case 6:th=m1+m2+m3+m4+m5+d;break;
			case 7:th=m1+m2+m3+m4+m5+m6+d;break;
			case 8:th=m1+m2+m3+m4+m5+m6+m7+d;break;
			case 9:th=m1+m2+m3+m4+m5+m6+m7+m8+d;break;
			case 10:th=m1+m2+m3+m4+m5+m6+m7+m8+m9+d;break;
			case 11:th=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+d;break;
			case 12:th=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+d;break;
			default:break;
		
		
		
		}

		printf("该日为今年的第%d天\n",th);		
		return 0;
}