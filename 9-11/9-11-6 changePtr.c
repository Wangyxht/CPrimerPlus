#include<stdio.h>
#include<stdlib.h>

void ChangePtr( double*, double*,double*);

int main (void)
{
    double numberA , numberB ,numberC;

    printf("请输入三个double类型数值，用逗号隔开:");


    while(scanf("%lf,%lf,%lf",&numberA,&numberB,&numberC)!=3)
    {
        printf("输入错误，请重试。\n");
        printf("请输入三个double类型数值，用逗号隔开:");
            while(getchar()!='\n')
                continue;
    }
    ChangePtr(&numberA,&numberB,&numberC);
    printf("更改地址后排序：%.2lf %.2lf %.2lf\n",numberA,numberB,numberC);

    system("pause");
    return 0;





}

void ChangePtr(double*ptrnumberA , double*ptrnumberB,double*ptrnumberC)
{
    double temp;
    do
    {
       if(*ptrnumberA<*ptrnumberB)
        {
            temp=*ptrnumberA;
            *ptrnumberA=*ptrnumberB;
            *ptrnumberB=temp;
        }

        if(*ptrnumberB<*ptrnumberC)
        {
            temp=*ptrnumberB;
            *ptrnumberB=*ptrnumberC;
            *ptrnumberC=temp;
        }

        if(*ptrnumberA<*ptrnumberC)
        {
            temp=*ptrnumberA;
            *ptrnumberA=*ptrnumberC;
            *ptrnumberC=temp;
    
        }

    }
    while(*ptrnumberA<*ptrnumberB || *ptrnumberB<*ptrnumberC || *ptrnumberA<*ptrnumberC);


}