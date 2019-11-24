#include <stdio.h>
int main()
{
	int i,j,a,b,c,d,e;
	char text[3][80];
	a=b=c=d=e=0;
	for (i=0;i<3;i++){
		printf("please input line %d:\n",i+1);
		gets(text[i]);
	for (j=0;j<80 && text[i][j]!='\0';j++){
		if (text[i][j]>='A'&& text[i][j]<='Z')
			a++;
		else if (text[i][j]>='a' && text[i][j]<='z')
			b++;
		else if (text[i][j]>='0' && text[i][j]<='9')
			c++;
		else if (text[i][j]==' ')
			d++;
		else
			e++;
		}
	}
	printf("\n大写字母: %d\n",a);
	printf("小写字母: %d\n",b);
	printf("数字 : %d\n",c);
	printf("空格 : %d\n",d);
	printf("其他 : %d\n",e);
	return 0;

}