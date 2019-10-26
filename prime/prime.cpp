// prime.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include "time.h"
int main(int argc, char* argv[])
{
	int i,j,k=0,t=1;
	long t0,t1;
	t0 = clock();
	for(i=2;i<1000000;i++)
		{
			for(j=2;j*j<=i;j++)
			if(i%j==0)
			break;
			if(j*j>i)
			{
				printf("%d  ",i);
				t++;
				k++;
				if(k%10==0)
				printf("\n");
			}
		}
			t1=clock();
			printf("\n数量:%d\n 时间:%10.2f",t, (t1 - t0)/(float)CLOCKS_PER_SEC);
}