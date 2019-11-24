#include<stdio.h>
void main()
{
    char s1[111],s2[111];
    int i;
    printf("ÊäÈës2×Ö·û´®:\n");
    gets(s2);
    for(i=0;s1[i]=s2[i];i++);
    printf("s2×Ö·û´®Êä³ö£º\n");
    printf("%s\n",s1);
} 
