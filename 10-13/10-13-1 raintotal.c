#include<stdio.h>
#include<stdlib.h>

#define MONTHES 12
#define YEAR 5


int main (void)
{
    float rain [YEAR] [MONTHES]=
    {   
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.8, 7.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},        
    };
    int year,month;
    float sumYear,sumMonth,total;
    float (*ptr)[MONTHES]=rain;
    
    
    
    printf("各个年度降水量总和：\n");

        for (year=0,total=0; year<YEAR; year++)
        {
            for(sumYear=0 ,month=0; month<MONTHES ;month++)
            {
                sumYear+=*(*(ptr+year)+month);
            }
            printf("%d年 总降水量：%g\n",2000+year,sumYear);

            total+=sumYear;
        }
    printf("五年总降水量：%f\n",total);
    
    
    
    printf("各月份年度总降水量：\n");
        for (month=0; month<MONTHES ;month++)
        {
            for (year=0,sumMonth=0; year<YEAR ;year++)
            {
                sumMonth+=*(*(ptr+year)+month);
            }
            printf("%d 月年度总降水量：%g\n",1+month,sumMonth);
        }



    
    
    system("pause");
    return 0;

}