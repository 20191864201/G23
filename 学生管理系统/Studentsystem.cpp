#include <stdio.h>
struct student *temp;
struct student *head;
struct student{
    int num;
    char name[6];
    int yw;
    int sx;
    int yy;
	int ls;
	int dl;
	int zz;
	int sw;
	int wl;
	int hx;
	int com;
    struct student*next;
};
int menu();
void login();
struct student* luru();
void cr(struct student *h);
struct student*cc();
int menu1();
void paxu();
void px1();
void px2();
void px3();
void px4();
void px5();
void px6();
void px7();
void px8();
void px9();
void px10();
void px11();
void chazhao();
void xg();

#include <stdlib.h>
#include <string.h>
int  main ()
{
	student *head;
        while(1)
        {
            switch(menu())
            {	
                case 1:
                    system("CLS");
                    printf("\t\t________学生成绩录入_______\n");
                    head=luru();
                    cr(head);
                    int choice;
                    scanf("%d",&choice);
                    if(choice==0)
                        break;
                case 2:
                    system("CLS");
                    printf("\t\t_________学生成绩排序___\n");
                    paxu();
                    int end;
                    scanf("%d",&end);
                    if(end==0)
                        break;
                case 3:
                    system("CLS");
                    printf("\t\t__________成绩查询_________\n");
                    chazhao();
                    int a;
                    scanf("%d",&a);
                    if(a==0)
                        break;
                
				case 4:
                    system("CLS");
                    printf("\t\t__________成绩修改__________");
                    xg();
                    int c;
                    scanf("%d",&c);
                    if(c==0)
                        break;
                case 5:
                    system("CLS");
                    printf("\t\t___________谢谢使用_______\n");
                  
                    exit(-1);   
                    break; 
            }
            system("PAUSE");
        }
    return 0;
}


int menu()
{
        char n; 
        do{
        system("cls");
        printf("\t\t\t|-------------------------------------------------|\n");
        printf("\t\t\t|      *****学生管理系统*****                     |\n");
        printf("\t\t\t|-------------------------------------------------|\n");
        printf("\t\t\t|          1.学生成绩录入                         |\n");
        printf("\t\t\t|          2.学生成绩排序                         |\n");
        printf("\t\t\t|          3.成绩查询                             |\n"); 
		printf("\t\t\t|          4.成绩修改                             |\n");
		printf("\t\t\t|          5.退出系统                             |\n");
        printf("\t\t\t---------------------------------------------------\n");
        printf("请选择1-5：");
        n=getchar(); 
        }while(n<'0'||n>'5');
        return(n-48);
}
struct student *luru()
{

    struct student*rhead ,*r,*t,*stu;
    rhead=(struct student*)malloc(sizeof(struct student));
    t=rhead;
    rhead->next=NULL;
    char xx;
    int flag=1;
    printf("\t\t_____________________________\n");
    printf("\t\t|        学生管理系统       |\n");
    printf("\t\t_____________________________\n");
    printf("\t\t|                           |\n");
    printf("\t\t|        输入1添加          |\n");
    printf("\t\t|        输入0退出          |\n");
    printf("\t\t|___________________________|\n"); 
    while(xx!='1'&&xx!='0')
    {
        xx=getchar();
    }
    if(xx=='1')
    {
        system("CLS");
        do{
            system("CLS");
            stu=(struct student*)malloc(sizeof(struct student));
            printf("\t\t_____________________________\n");
            printf("\t\t|        学生管理系统       |\n");
            printf("\t\t|___________________________|\n");
            printf("\t\t|                           |\n");
            printf("\t\t|        输入1添加          |\n");
            printf("\t\t|        输入0退出          |\n");
            printf("\t\t|___________________________|\n"); 
            printf("\t\t学号: ");scanf("%d",&stu->num);
            if(stu->num > 9999||stu->num < 100)
            {
                printf("\t\t______________________\n");
                printf("\t\t请输入4位非负数\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入学号: ");scanf("%d",&stu->num);
            }
            printf("\t\t姓名: ");scanf("%s",stu->name);
            if(stu->name[0] > 0)
            {
                printf("\t\t______________________\n");
                printf("\t\t______姓名请输入汉字__\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入姓名: ");scanf("%s",stu->name);
            }
            printf("\t\t语文: ");scanf("%d",&stu->yw);
            printf("\t\t数学: ");scanf("%d",&stu->sx);
            printf("\t\t英语: ");scanf("%d",&stu->yy);
			printf("\t\t政治: ");scanf("%d",&stu->zz);
			printf("\t\t历史: ");scanf("%d",&stu->ls);
			printf("\t\t地理: ");scanf("%d",&stu->dl);
			printf("\t\t生物: ");scanf("%d",&stu->sw);
			printf("\t\t物理: ");scanf("%d",&stu->wl);
			printf("\t\t化学: ");scanf("%d",&stu->hx);
			printf("\t\t计算机: ");scanf("%d",&stu->com);
            if(stu->sx<0||stu->sx>100||stu->yw<0||stu->yw>100||stu->yy<0||stu->yy>100||stu->ls<0||stu->ls>100||stu->zz<0||stu->zz>100||stu->dl<0||stu->dl>100||stu->sw<0||stu->sw>100||stu->wl<0||stu->wl>100||stu->hx<0||stu->hx>100||stu->com<0||stu->com>100)
            {
                printf("\t\t______________________\n");
                printf("\t\t_成绩请输入0-100之间__\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入成绩\n");
                printf("\t\t语文: ");scanf("%d",&stu->yw);
                printf("\t\t数学: ");scanf("%d",&stu->sx);
				printf("\t\t英语: ");scanf("%d",&stu->yy);
				printf("\t\t政治: ");scanf("%d",&stu->zz);
				printf("\t\t历史: ");scanf("%d",&stu->ls);
				printf("\t\t地理: ");scanf("%d",&stu->dl);
				printf("\t\t生物: ");scanf("%d",&stu->sw);
				printf("\t\t物理: ");scanf("%d",&stu->wl);
				printf("\t\t化学: ");scanf("%d",&stu->hx);
				printf("\t\t计算机: ");scanf("%d",&stu->com);
		
                
            }
            t->next=stu;
            t=stu;
           xx = getchar();
           printf("继续输入请按1，退出请按0："); 
           while(xx!='1'&&xx!='0')
          {
             xx=getchar();
          }
        }while(xx=='1');
        t->next=NULL;
   }
   return (rhead);
}
void cr(struct student *h)
{
    struct student *stu;
    FILE*fp;
    if((fp=fopen("学生信息.txt","wt"))==NULL)
    {
        printf("文件出错233，按任意键退出！");
        getchar();
        exit(1); 
    }
    for(stu=h->next;stu!=NULL;stu=stu->next)
    {	
        fprintf(fp,"%d %s %d %d %d %d %d %d %d %d %d %d\n",stu->num,stu->name,stu->yw,stu->sx,stu->yy,stu->ls,stu->dl,stu->zz,stu->wl,stu->hx,stu->sw,stu->com);
    }
    fclose(fp);
}

struct student*cc()
{
    struct student*ahead,*r,*stu;
    FILE*f1;
    f1=fopen("学生信息.txt","rt");
    ahead=(struct student*)malloc(sizeof(struct student));
    ahead->next=NULL;
    r=ahead;
    while(!feof(f1))
    {
        stu=(struct student*)malloc(sizeof(struct student));
        fscanf(f1,"%d %s %d %d %d %d %d %d %d %d %d %d\n",&stu->num,&stu->name,&stu->yw,&stu->sx,&stu->yy,&stu->ls,&stu->dl,&stu->zz,&stu->wl,&stu->hx,&stu->sw,&stu->com);   
        r->next=stu;
        r=stu;
    }
    r->next=NULL;
    fclose(f1);
    return ahead;    
}
int menu1()
{
    system("CLS");
    char n;
    do{
    system("CLS");
    printf("\t\t__________________________________________________\n");
    printf("\t\t|                                                |\n");
    printf("\t\t|   1.顺序排序   2.按英语排序   3.按语文排序     |\n");
    printf("\t\t|   4.按数学排序 5.按历史排序   6.按地理排序     |\n");
    printf("\t\t|   7.按政治排序 8.按物理排序   9.按化学排序     |\n");
	printf("\t\t|   10.按生物排序11.按计算机排序                 |\n");
    printf("\t\t|______________按0退出___________________________|\n");
    printf("\t\t请选择0-11：");
    n=getchar(); 
    }while(n<'0'||n>'11');
    return (n-48);      
} 
void paxu()
{
    system("CLS");
    char n;
   do{
        switch(menu1())
       {
        case 1:
            px1();
            break;
        case 2:
            system("CLS");
            px2();
            break;
        case 3:
            system("CLS");
            px3();
            break;
        case 4:
            system("CLS");
            px4();
            break;
        case 5:
            system("CLS");
            px5();
            break;
        case 6:
            system("CLS");
            px6();
            break;
		case 7:
			system("CLS");
			px7();
			break;
		case 8:
			system("CLS");
			px8();
			break;
		case 9:
			system("CLS");
			px9();
			break;
		case 10:
			system("CLS");
			px10();
			break;
		case 11:
			system("CLS");
			px11();
			break;

       }
       printf("继续输入请按1，退出请按0：");
       n=getchar();
       while(n!='1'&&n!='0')
          {
             n=getchar();
          }
   }while(n=='1');
   if(n=='0')
       return;
}
void px1()
{
    struct student *t,*h; 
    h=cc();
    printf("\n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机","总分","平均分");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=h->next;t!=NULL;t=t->next)
    {	
		int sum=0;
		float arr;
		sum = t->yw+t->sx+t->yy+t->ls+t->dl+t->zz+t->wl+t->hx+t->sw+t->com;
		arr=sum/10.0;
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%10f\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com,sum,arr );
    } 
}
void px2()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->yy < q->yy)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;
		      }
        } 
    }
    printf("\t\t                    英语排序                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px3()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->yw < q->yw)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;
            }
        } 
    }
    printf("\t\t                    语文                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px4()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->sx < q->sx)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    数学                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px5()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->ls < q->ls)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    历史                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px6()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->dl < q->dl)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    地理                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px7()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->zz < q->zz)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    政治                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px8()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->wl < q->wl)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;


            }
        } 
    }
    printf("\t\t                    物理                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px9()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->hx < q->hx)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;





            }
        } 
    }
    printf("\t\t                    化学                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px10()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->sw < q->sw)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    生物                                   \n");
    printf("\t\%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void px11()
{
    struct student *p,*q,*head,*t; 
    head=cc();
    int tnum;
    char tname[6];
    int tyw;
    int tsx;
    int tyy;
	int tls;
	int tdl;
	int tzz;
	int twl;
	int thx;
	int tsw;
	int tcom;
    for(p = head->next;p->next!=NULL;p=p->next){
        for(q=p->next;q!=NULL;q=q->next){
            if(p->com < q->com)
            {
                tnum=p->num;
                p->num=q->num;
                q->num=tnum;

                strcpy(tname,p->name);
                strcpy(p->name,q->name);
                strcpy(q->name,tname);

                tyw=p->yw;
                p->yw=q->yw;
                q->yw=tyw;

                tsx=p->sx;
                p->sx=q->sx;
                q->sx=tsx;

                tyy=p->yy;
                p->yy=q->yy;
                q->yy=tyy;

				tls=p->ls;
                p->ls=q->ls;
                q->ls=tls;

				tdl=p->dl;
                p->dl=q->dl;
                q->dl=tdl;

				
				tzz=p->zz;
                p->zz=q->zz;
                q->zz=tzz;

				
				twl=p->wl;
                p->wl=q->wl;
                q->wl=twl;

				
				thx=p->hx;
                p->hx=q->hx;
                q->hx=thx;

				
				tsw=p->sw;
                p->sw=q->sw;
                q->sw=tsw;
				
				tcom=p->com;
                p->com=q->com;
                q->com=tcom;

            }
        } 
    }
    printf("\t\t                    计算机                                   \n");
    printf("\t\t%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s\n","学号","姓名","语文","数学","英语","历史","地理","政治","物理","化学","生物","计算机");
    printf("\t\t--------------------------------------------------------------\n");
    for(t=head->next;t!=NULL;t=t->next)
    {
        printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d%\n",t->num,t->name,t->yw,t->sx,t->yy,t->ls,t->dl,t->zz,t->wl,t->hx,t->sw,t->com );
    } 
}
void  chazhao()
{
    px1();
    struct student *p,*q,*phead,*t,*m; 
    phead=cc();
    int n;
    int flag=0;
    printf("\t\t____________________________________________________\n");
    printf("\t\t|______________查找学生信息_________________________|\n");
    printf("\t\t|___________________________________________________|\n");
    printf("\t\t请输入要查找的学生学号：");
    scanf("%d",&n);
    p=phead;
    for(m=phead;m!=NULL;m=m->next)
    {
        if(m->num==n)
        {
            printf("\t\t已经查到改学生的信息\n");
            flag=0;
			printf("\t\t%10d%10s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d",m->num,m->name,m->yw,m->sx,m->yy,m->ls,m->dl,m->zz,m->wl,m->hx,m->sw,m->com);
            break;
        }
        else
            flag=1;  
    }
    if(flag==1)
        printf("\t\t抱歉，没有查到该学生的信息\n");
}
void xg()
{
    system("CLS");
    char n;
    do{
    system("CLS");
    px1();
    struct student *p,*q,*phead,*t,*m; 
    int flag=0;
    int timp; 
    phead=cc();
    printf("\t\t____________________________________________________\n");
    printf("\t\t|______________修改学生信息_________________________|\n");
    printf("\t\t|___________________________________________________|\n");
    printf("\t\t请输入要修改的学生学号：");
    scanf("%d",&timp);
    p=phead;
    for(m=phead;m!=NULL;m=m->next)
    {
        if(m->num==timp)
        {
            printf("\t\t已经查到改学生的信息\n");
            flag=0;
            break;
        }
        else
            flag=1;  
    }
    if(flag==1)
        printf("\t\t抱歉，没有查到该学生的信息\n");
    if(flag==0)
    {
        printf("\t\t该学生的原信息如下\n");
    printf("\t\t学号：%d\n",m->num);
    printf("\t\t姓名：%s\n",m->name);
    printf("\t\t语文：%d\n",m->yw);
    printf("\t\t数学：%d\n",m->sx);
    printf("\t\t英语：%d\n",m->yy);
	printf("\t\t政治: %d\n",m->zz);
	printf("\t\t历史: %d\n",m->ls);
	printf("\t\t地理: %d\n",m->dl);
	printf("\t\t生物: %d\n",m->sw);
	printf("\t\t物理: %d\n",m->wl);
	printf("\t\t化学: %d\n",m->hx);
	printf("\t\t计算机:%d\n",m->com);

    printf("\t\t请重新输入该学生的信息\n");
    printf("\t\t学号: ");scanf("%d",&m->num);
            if(m->num > 9999||m->num < 100)
            {
                printf("\t\t______________________\n");
                printf("\t\t_请输入8位非负数__\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入学号: ");scanf("%d",&m->num);
            }
            printf("\t\t姓名: ");scanf("%s",m->name);
            if(m->name[0] > 0)
            {
                printf("\t\t______________________\n");
                printf("\t\t______姓名请输入汉字__\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入姓名: ");scanf("%s",m->name);
            }
            printf("\t\t语文: ");scanf("%d",&m->yw);
            printf("\t\t数学: ");scanf("%d",&m->sx);
            printf("\t\t英语: ");scanf("%d",&m->yy);
			printf("\t\t政治: ");scanf("%d",&m->zz);
			printf("\t\t历史: ");scanf("%d",&m->ls);
			printf("\t\t地理: ");scanf("%d",&m->dl);
			printf("\t\t生物: ");scanf("%d",&m->sw);
			printf("\t\t物理: ");scanf("%d",&m->wl);
			printf("\t\t化学: ");scanf("%d",&m->hx);
			printf("\t\t计算机: ");scanf("%d",&m->com);
            if(m->sx<0||m->sx>100||m->yw<0||m->yw>100||m->yy<0||m->yy>100||m->ls<0||m->ls>100||m->zz<0||m->zz>100||m->dl<0||m->dl>100||m->sw<0||m->sw>100||m->wl<0||m->wl>100||m->hx<0||m->hx>100||m->com<0||m->com>100)
            {
                printf("\t\t______________________\n");
                printf("\t\t_成绩请输入0-100之间__\n");
                printf("\t\t______________________\n");
                printf("\t\t重新输入成绩\n");
                printf("\t\t语文: ");scanf("%d",&m->yw);
                printf("\t\t数学: ");scanf("%d",&m->sx);
                printf("\t\t英语: ");scanf("%d",&m->yy);
				printf("\t\t政治: ");scanf("%d",&m->zz);
				printf("\t\t历史: ");scanf("%d",&m->ls);
				printf("\t\t地理: ");scanf("%d",&m->dl);
				printf("\t\t生物: ");scanf("%d",&m->sw);
				printf("\t\t物理: ");scanf("%d",&m->wl);
				printf("\t\t化学: ");scanf("%d",&m->hx);
				printf("\t\t计算机: ");scanf("%d",&m->com);
            } 
            printf("\t\t该学生信息已修改\n");
            cr(phead);
    }
    printf("继续修改请按1，退出请按0：");
    n=getchar();
    while(n!='1'&&n!='0')
    {
        n=getchar();
    }   
    }while(n=='1');
   if(n=='0')
       return;
} 
