#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
 int i;
 int counter=0;
 double t1,t2;
 int a,b;
 printf("������ҪѰ�ҵķ�Χ��");
 printf("��ʼֵ��");
 scanf("%d",&a);
 printf("����ֵ:");
 scanf("%d",&b);

 t1=clock();
 for (i=a;i<=b;i++)
 {
	 int weishu=1;
	 int cifanghe=0,k;
	 k=i;
	 while(k>9)
	 {
		weishu++;
		k/=10;
	 }
	 k=i;
	 while(k>0)
	 {
		int a=k%10;
		cifanghe +=pow((float)a,weishu);
		k/=10;
	 }
	 if (i==cifanghe)
	 {
		 printf("%-10d",i);
		counter++;
		if(counter%5==0)
		printf("\n");
	 }

 }
 t2=clock();
	 printf("\n��ʱ��%f��\n",(t2-t1)/1000.0);
 return 0;
}

