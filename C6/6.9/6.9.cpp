#include <stdio.h>
int main()
{
	int s[15]={15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	int a,b,c,mid;
	a=0;
	b=14;
	printf("������һ��������");
	scanf("%d",&c);
	while(a<=b)
	{
		mid=(a+b)/2;
		if(c==s[mid])
		{
			printf("�ǵ�%d����\n",mid+1);
				break;
		}
		else if(c<s[mid])
		
			a=mid+1;
			else b=mid-1;
		}
		if(a>b)
			printf("�޴���\n");
	
	
	
	
return 0;

}