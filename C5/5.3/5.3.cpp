#include <stdio.h>
int main()  // 辗转相除法，最大公约数乘最大公倍数等于两数之积//
 {
  int  p,r,n,m,t,x,y;
  printf("请输入两个正整数n,m:");
  scanf("%d%d,",&n,&m);
  if (n<m)//保证n>=m//
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
  printf("它们的最小公倍数为:%d\n",p/n);
  printf("它们的最大公约数为:%d\n",n);
  return 0;
 }
