#include<stdio.h>
#include<stdlib.h>
int main (void)
{   
    int num,sum=0;
    unsigned i=1;
    
    printf("输入一个整数：");
    scanf("%d",&num);
    
    while(i++<10)
    {       
        sum=sum+num;
        printf("%d\t",num);
        num=num+1;    

    }
    printf("\n");
    
    printf("比该数大10的所有整数的和为%d\n\a",sum);
    system("pause");
    return 0;
}