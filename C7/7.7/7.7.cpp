#include<stdio.h>
int main() 
{	
	void copy(char c[],char d[]);
    char a[10],b[10];
    printf("����һ���ַ�����\n");
    gets(a);
    copy(a,b);
    printf("���Ԫ����ĸ���ַ���:%s",b);
	printf("\n");
	

	return 0;
}
void copy(char c[],char d[])
{
    int i,j=0;
    for (i=0;c[i]!='\0';i++)
        if(c[i]==97||c[i]==101||c[i]==105||
        c[i]==111||c[i]==117||c[i]==65||
        c[i]==69||c[i]==73||c[i]==85) 
    {
        d[j]=c[i];
        j++;
    }
}