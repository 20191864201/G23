#include <stdio.h>
int main()
{	
	char c[20];
    int i,j;
	char str1[10];
	char str2[10];
	printf("�������ַ���1��");
	gets(str1);
	printf("�������ַ���2��");
	gets(str2);
    for(i=0;str1[i]!='\0';i++) c[i]=str1[i];
    for(j=0;str2[j]!='\0';j++) c[i+j]=str2[j];
        c[i+j+1]='\0';
    printf("���Ӻ�:%s\0 ",c);
	printf("\n");


return 0;
}