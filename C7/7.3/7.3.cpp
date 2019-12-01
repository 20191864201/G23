#include <stdio.h>
#include <math.h>
int is_prime_number(int num)
{
	int i;
	if(num<2)
		return 0;
	for(i=2;i<(int)sqrt(num)+1;i++){
		if(num%i==0)
			return 0;
	}
	return 1;
}
	int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	if(is_prime_number(n))
		printf("%d是素数",n);
	else
		printf("%d不是素数\n",n);
	return 0;
	
}