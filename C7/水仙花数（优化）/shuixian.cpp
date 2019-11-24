#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
 int pow_a(int m, int n);
 int i,c;
 int counter=0;
 double t1,t2;

 t1=clock();
 for (i=100;i<=999999999;i++)
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
		
		int z=k%10;
		c=pow_a(z,weishu);
		cifanghe+=c;
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
	 printf("\n”√ ±£∫%f√Î\n",(t2-t1)/1000.0);
 return 0;
}
int pow_a(int m,int n)
{
	int x;
	int a[9][9]={1,1,1,1,1,1,1,1,1,2,4,8,16,32,64,128,256,512,3,9,27,81,243,729,2187,6561,19683,4,16,64,256,1024,4096,16384,65536,262144,5,25,125,625,3125,15625,78125,390625,1953125,6,36,216,1296,7776,46656,279936,1679616,10077696,7,49,343,2401,16807,117649,823543,5764801,40353607,8,64,512,4096,32768,262144,2097152,16777216,134217728,9,81,729,6561,59049,531441,4782969,43046721,387420489};
	x=a[m-1][n-1];
	if(m=0)
		return 0;
	else
	return(x);
}
