#include<stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    printf("请输入s1：");
    gets(s1);
    printf("请输入s2：");
    gets(s2);
    int i,num=0;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        num=num+s1[i]-s2[i];
        printf("\n");
    }
    printf("结果是：%d\n\n",num);
    return 0;
}
