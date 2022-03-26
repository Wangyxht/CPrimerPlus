// 求最小值（用函数编写）

#include<stdio.h>
#include<stdlib.h>

double Min(double a, double b);

int main (void)
{
    double a , b , result;
    
    printf("输入两个数值比较大小(q to quit):");
    while(scanf("%lf %lf",&a,&b)==2)
    {
        result=Min(a,b);
        printf("较小的数值为：%lf",result);
        putchar('\n');
        printf("输入两个数值比较大小:");
    }

    system("pause");
    return 0;
}

double Min(double a ,double b)
{
    if (a>b)
        return b;
    else
        return a;
}