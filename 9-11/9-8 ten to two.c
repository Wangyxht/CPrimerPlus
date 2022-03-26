/*进制转换程序 十进制转换二进制 递归*/

#include<stdio.h>
#include<stdlib.h>



void Calculate( unsigned long );

int main (void)
{
    unsigned long numberTen;
    
    printf("请输入一个十进制整数(q to quit):");
    while  (scanf("%lu",&numberTen)==1)
    {
        
        printf("%d 转化为二进制结果为：",numberTen);
        Calculate(numberTen);
        putchar('\n');
        printf("请输入一个十进制整数(q to quit):");

    }

    printf("运行结束");
    return 0;





}



void Calculate( unsigned long number )
{
    int a;
    a=number%2;
    if (number>=2)
        Calculate(number/2);
    
    putchar((a==0) ? '0':'1');
    

    return;
}