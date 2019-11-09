#include <stdio.h>
int main()
 {
  int  a,n,i=1,sn=0,b=0;
  printf("a,n=:");
  scanf("%d%d",&a,&n);
  while (i<=n)
  {
  b=b+a;  
  sn=sn+b; 
  a=a*10;
  i++;
  }
  printf("a+aa+aaa+...+a^n=%d\n",sn);
  return 0;
  }