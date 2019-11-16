#include <stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{2,4,6},{7,8,9}};
	int sum;
	

		sum=a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2];
		printf("%d\n",sum);

return 0;
}