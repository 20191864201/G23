#include <stdio.h>
int main()  // շת����������Լ������󹫱�����������֮��//
 {
  int  p,r,n,m,t,x,y;
  printf("����������������n,m:");
  scanf("%d%d,",&n,&m);
  if (n<m)//��֤n>=m//
   {
    t=n;
    n=m;
    m=t;
   }
 
  p=m*n;


  while(m!=0)
   {
	  r=n;
	  n=m;
	  m=r%m;
   
   }
  printf("���ǵ���С������Ϊ:%d\n",p/n);
  printf("���ǵ����Լ��Ϊ:%d\n",n);
  return 0;
 }
