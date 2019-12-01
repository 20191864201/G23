#include<stdio.h>
#include<string.h>
char change(char a[])
{
	int i,j,ans=0,len;
	len=strlen(a);
	for (i=len-1,j=1;i>=0;i--) 
    {
        if(a[i]>='0'&&a[i]<='9')
            ans+=(a[i]-'0')*j; 
        else if(a[i]>='A'&&a[i]<='F')
            ans+=(a[i]-'A'+10)*j;
        else if(a[i]>='a'&&a[i]<='f')                                                                 
            ans+=(a[i]-'a'+10)*j;
			j*=16;                                                                         
    }
    printf("%d\n",ans);
return 0;
}
main() 
{
    char a[100];
    int i,k,sum=0;
    gets(a);
    change(a);
}
