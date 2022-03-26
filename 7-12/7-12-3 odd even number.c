#include<stdio.h>
#include<stdlib.h>

#define Stop '0'

int main(void)
{



    int number;
    unsigned Count_even_Number=0, Sum_even=0;
    unsigned Count_odd_Number=0, Sum_odd=0;
    double average_even, average_odd;

    printf("输入多个数字，（0 to quit)\n");

    while((number=getchar())!=Stop)
    {
        if (number%2==0)
        {
            Count_even_Number++;
            Sum_even=Sum_even+number;

        }

        else
        {
            Count_odd_Number++;
            Sum_odd=Sum_odd+number;
        }



    }

    printf("共计%d个偶数，偶数和为%d,平均值为%lf。\n",Count_even_Number,Sum_even,(double)Sum_even/(double)Count_even_Number);
    printf("共计%d个奇数，奇数和为%d,平均值为%lf。\n",Count_odd_Number,Sum_odd,(double)Sum_odd/(double)Count_odd_Number);

    system("pause");
    return 0;




}