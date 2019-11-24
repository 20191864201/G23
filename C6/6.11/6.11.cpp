#include<stdio.h>
#include<string.h>
main()
{
	char a[]={"*****"},i,j;
	for(i=1;i<=5;i++)
	{
		puts(a);
	 for(j=1;j<=i;j++)
     printf("%c",32);
	}
	return 0;
}
