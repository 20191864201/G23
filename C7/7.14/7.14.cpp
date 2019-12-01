#include<stdio.h>
#include<math.h>
#include<string.h>
double AVG1(int a[][5])
{
    int i,j,sum;
    double ans;
    printf("每个学生的平均分是:\n");
    for(i=0;i<10;i++)
    {
    	ans=0;
		sum=0;
    	for(j=0;j<5;j++)
    	{
	    	sum+=a[i][j];
	    }
	    ans=sum/5;
	    printf("%.2lf\n",ans);
    }
	return 0;
}
double AVG2(int a[][5])
{
	int i,j,sum;
    double ans;
    printf("每门课的平均分是：\n");
    for(i=0;i<5;i++)
    {
    	ans=0;
		sum=0;
    	for(j=0;j<10;j++)
    	{
	    	sum+=a[i][j];
	    }
	    ans=sum/10;
	    printf("%.2lf\n",ans);
    }
	return 0;
}
double compare(int a[][5])
{
	int i,j,max,name,subject;
	max=a[0][0];
	for(i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				name=i+1;
				subject=j+1;
			}	
		}
		return 0;
	}
	printf("名字:%d 课程:%d 得分:%d\n",name,subject,max);
}
int FC(int a[][5]) 
{
    int i,j;
    double ans,fc,b[10],c[10],sum,x=0,y=0;
    printf("方差是:\n");
    for(i=0;i<10;i++)
    {
    	ans=0;
		sum=0;
    	for(j=0;j<5;j++)
    	{
	    	sum+=a[i][j];
	    }
	    ans=sum/5;
	    b[i]=ans;
    }
    for(i=0;i<10;i++)
    y+=b[i];
    y/=10;
    y=y*y;
    for(i=0;i<10;i++)
    b[i]*=b[i];
    for(i=0;i<10;i++)
    x+=b[i];
    x=x/10;
    fc=x-y;
    printf("%lf\n",fc);
	return 0;
}
main()
{
    int a[10][5]={78,79,80,81,82,  72,73,87,91,82,  92,93,87,71,78,  92,93,97,91,98,  76,97,77,61,68,  62,73,67,61,68,  
	82,98,87,78,88,  100,97,97,91,98,  98,93,77,87,90,  99,93,89,73,98};
	int i,j;
	AVG1(a);
	AVG2(a);
	compare(a);
	FC(a);
	return 0;
}
