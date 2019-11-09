#include<stdio.h>
main()
{
    long num;
    printf("输入一个不多于5位的整数:\n");
    scanf("%ld",&num);
    int place;
    if(num>9999) place=5;
    else if(num>999) place=4;
    else if(num>99) place=3;
    else if(num>9) place=2;
    else place=1;
    printf("\n%d是%d位数\n",num,place);
    int ten_thousand,thousand,hundred,ten,indiv;
    ten_thousand=num/10000;
    thousand=(num-ten_thousand*10000)/1000;
    hundred=(num-ten_thousand*10000-thousand*1000)/100;
    ten=(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
    indiv=(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
    printf("\n分别打印出每一位数字和逆序输出:\n");
    switch(place)
    {
        case 5:printf("%d\t%d%d%d%d%d\n",num,indiv,ten,hundred,thousand,ten_thousand);break;
        case 4:printf("%d\t%d%d%d%d\n",num,indiv,ten,hundred,thousand);break;
        case 3:printf("%d\t%d%d%d\n",num,indiv,ten,hundred);break;
        case 2:printf("%d\t%d%d\n",num,indiv,ten);break;
        case 1:printf("%d\t%d\n",num,indiv);break;
    }
}
