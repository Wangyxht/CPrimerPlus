#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int age;
    double age_second, year_second=3.156e07;

    printf("Please enter your age:\n");
    scanf("%d",&age);
    age_second = year_second * age;
    printf("second:2%lf s\n",age_second);
    
    system("pause");


    return 0;


}