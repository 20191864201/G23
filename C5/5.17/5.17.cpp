#include<stdio.h>
main()
{
	char a,b,c;
	for(a='x';a<='z';a++)
       for(b='x';b<='z';b++)
       if(a!=b)
    for(c='x';c<='z';c++)
	   if(a!=c&&b!=c)
	   if(a!='x'&&c!='x'&&c!='z')
       printf("A-%c B-%c C-%c\n",a,b,c);
	return 0;
}
