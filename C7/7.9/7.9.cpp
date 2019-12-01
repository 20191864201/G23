#include <stdio.h>
main()
{
	char a[999];
	void fun_char(char a[]);
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(a);
	fun_char(a);

}
void fun_char(char a[])
{
	int i;
	int z=0,s=0,k=0,q=0;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
			z++;
		else if(a[i]<='9'&&a[i]>='0')
			s++;
		else if(a[i]==' ')
			k++;
		else
			q++;
	
	}
	printf("z=%d;\ts=%d;\tk=%d;\tq=%d\n",z,s,k,q);

}