#include<stdio.h>
#include<string.h>
main()
{
	char a[9999],b[9999],i,j;
	printf("请输入源码：");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		b[i]=155-a[i];
		else if(a[i]>='a'&&a[i]<='z')
		b[i]=219-a[i];
		else b[i]=a[i];
		b[i+1]='\0';
	}
	printf("\n密码为:");
	printf("%s\n",b);
	printf("\n源码为: ");
	printf("%s\n",a);
	return 0;
}
