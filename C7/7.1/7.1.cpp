#include <stdio.h>
int main()
{
	int max_num(int m,int n);
	int min_num(int m,int n);
	int a,b;
	printf("��������������:");
	scanf("%d %d",&a,&b);
	int max,min;
	max=max_num(a,b);
	min=min_num(a,b);
	printf("��С������Ϊ��%d�����Լ��Ϊ��%d\n",min,max);

	return 0;

}
	int max_num(int m, int n)
	{	
		int t,re;
		if(m<n)
		{
		t=n;
		n=m;
		m=t;
		}
	int r;	
		while(1)
		{	
			r=m%n;
			if(r==0)
			{re=n;break;}
			else 
				m=n;
				n=r;
		}
		return(re);
	}
int min_num(int m,int n)
{

		int t,re;
		if(m<n)
		{
		t=n;
		n=m;
		m=t;
		}
		int r;	
		while(1)
		{	
			r=m%n;
			if(r==0)
			{re=n;break;}
			else 
				m=n;
				n=r;
		}
		int min;
		min=m*n/re;
		return(min);






}