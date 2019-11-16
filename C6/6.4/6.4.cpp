#include<stdio.h>
main()
{
    int a[5]={2,4,5,7,9};
    int b,i,t;
    printf("please erter an integer number:\n");
    scanf("%d",&b);
    for(i=0;i<5;i++)
    {
        if(b<a[i]) 
        {
        t=a[i];
        a[i]=b;
        b=t; 
        }
        printf("%3d",a[i]);

    }
        printf("%3d",b);
}
