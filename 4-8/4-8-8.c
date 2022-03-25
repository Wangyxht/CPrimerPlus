#include<stdio.h>
#include<stdlib.h>

#define mile_to_kilometer 1.609
#define gal_to_liter 3.758

int main(void)
{
    float distance,pertol,kilo_per_pertol,pertol_per_kilo;
    
    printf("输入里程（英里）：");
    scanf("%f",&distance);
    printf("输入消耗汽油量（加仑）：");
    scanf("%f",&pertol);

    kilo_per_pertol=distance*mile_to_kilometer/pertol*gal_to_liter;
    pertol_per_kilo=pertol*gal_to_liter/distance*mile_to_kilometer;

    printf("每公里油耗：%.1f\n",pertol_per_kilo);
    printf("每升油耗里程：%1f\n",kilo_per_pertol);

    system("pause");
    return 0;



}