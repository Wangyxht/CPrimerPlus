#include<stdlib.h>
#include<stdio.h>

#define hours_to_minutes 60

int main (void)
{   
    int minute,temp_minutes,second,hours;

    printf("输入时间（分钟）：\n");
    scanf("%d",&minute);

    hours=minute/hours_to_minutes;
    temp_minutes=minute%hours_to_minutes;
    
    printf("%d h %d min\n",hours,temp_minutes);

    system("pause");
    return 0;
    
}