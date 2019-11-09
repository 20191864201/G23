
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("请输入一个不多于5位的正整数");
scanf("%d",&a);

if(a>=10000)
{
printf("%d is a 5 weishu\n",a);
b=a/10000;c=a%10000/1000;d=a%1000/100;e=a%100/10;f=a%10;
printf("b is %d,c is %d,d is %d,e is %d,f is %d\n",b,c,d,e,f);
printf("%d%d%d%d%d\n",f,e,d,c,b);}
else if(a>=1000)     
{printf("%d is a 4 weishu\n",a);
 c=a/1000;d=a%1000/100;e=a%100/10;f=a%10;
 printf("c is %d,d is %d,e is %d,f is %d\n",c,d,e,f);
 printf("%d%d%d%d\n",f,e,d,c);

}
else if(a>=100)     
{printf("%d is a 3 weishu\n",a);
 d=a/100;e=a%100/10;f=a%10;
 printf("d is %d,e is %d,f is %d\n",d,e,f);
 printf("%d%d%d",f,e,d);
}
else if(a>=10)       
{printf("%d is a 2 weishu\n",a);
e=a/10;f=a%10;
printf("e is %d,f is %d\n",e,f);
printf("%d%d\n",f,e);
}
else                
{printf("%d is a 1 weishu\n",a);
f=a;
printf("f is %d\n",f);
printf("%d",f);
}

return 0;
}