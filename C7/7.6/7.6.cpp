#include <stdio.h>
int  main()
{	
	void char_strcat( char str1[],char str2[]);
	char str1[30];
	char str2[10];
		printf("请输入两个字符串：");
		gets(str1);
		gets(str2);
		char_strcat(str1,str2);



return 0;
}
void char_strcat( char str1[],char str2[])
{	
	char c[20];
    int i,j;
    for(i=0;str1[i]!='\0';i++) c[i]=str1[i];
    for(j=0;str2[j]!='\0';j++) c[i+j]=str2[j];
        c[i+j+1]='\0';
    printf("连接后:%s\0 ",c);
	printf("\n");



}