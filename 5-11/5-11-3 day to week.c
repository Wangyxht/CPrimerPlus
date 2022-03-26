#include<stdlib.h>
#include<stdio.h>
#define day_to_week 7

int main(void)
{
    int all_day,week,day;


    printf("输入天数：");
    scanf("%d",&all_day);

    while (all_day>0)
    {
        week=all_day/day_to_week;
        day=all_day%7;

        printf("%d week %d day\n",week,day);
        printf("输入天数(0 to quit)：");
        scanf("%d",&all_day);
    }
    system("pause");
    return 0;


}