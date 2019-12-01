#include<stdio.h>
int Run(int y)
{
	if(y%4==0&&y%100!=0||y%400==0)
	return(1);
	else return(0);
} 
int jisuan(int m,int d)
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=1;i<m;i++)
    d+=a[i];
    return(d);
}
main()
{
	int y,m,d,t;
	scanf("%d%d%d",&y,&m,&d);
	t=jisuan(m,d);
	if(Run(y)&&m>=3)
	t+=1;
	printf("ÌìÊıÊÇ%d\n",t);
	return 0;
}
