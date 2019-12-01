#include <stdio.h>
#include <string.h>

int main()
{
	void reverse_str(char str[]);
	char str[100];
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(str);
	printf("ÄúÊäÈëµÄ×Ö·û´®Îª:\n%s\n",str);
	reverse_str(str);
	printf("·´ĞòºóµÄ×Ö·û´®Îª:\n%s\n",str);
	return 0;

}
void reverse_str(char str[])
{
	int i,j;
	char str_reverse[100];
	strcpy(str_reverse,str);
	for(i=0,j=strlen(str)-1;str[i]!='\0';i++,j--)
	{
		str[i]=str_reverse[j];
	}

}
