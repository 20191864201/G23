#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=90)
	printf("A\n");
	    else if(x>=80&&x<=89) printf("B\n");
		else if(x>=70&&x<=79) printf("C\n");
		else if(x>=60&&x<=69) printf("D\n");
		else printf("E\n");
	return 0;
}