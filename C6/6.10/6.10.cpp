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
	printf("\n��д��ĸ: %d\n",a);
	printf("Сд��ĸ: %d\n",b);
	printf("���� : %d\n",c);
	printf("�ո� : %d\n",d);
	printf("���� : %d\n",e);
	return 0;

}