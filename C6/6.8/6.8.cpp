#include <stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,n;
	n=3;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}	
	}

	int hang[3],lie[3];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			hang[i]=a[i][j];
			if(hang[i]<=a[i][j])
				hang[i]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			lie[i]=b[i][j];
			if(lie[i]>=b[i][j])
				lie[i]=b[i][j];
		}
	}
	for(i=0;i<n;i++){
		if(hang[i]==lie[i])
			printf("鞍点是：%d\n",i,hang[i]);
		else
			printf("没有鞍点\n",i);
	}

	return 0;
}