#include<stdio.h>
#include<stdlib.h>

int MaxArry(int*,int);

int main(void)
{
    int arry[20]={23,44,55,21,545,23,543,12,453,944,23,23,231,543,324,543,132,567,1312,354};
    int max;

    max=MaxArry(arry,20);

    printf("该数组中最大的项是：%d\n",max);

    system("pause");
    return 0;

}

int MaxArry(int*target,int size)
{
    int counter;
    int maxNumber;
    for(counter=0,maxNumber=*(target);counter<size;counter++)
    {
        maxNumber=(maxNumber<*(target+counter))?*(target+counter):maxNumber;

    }

    return maxNumber;
}