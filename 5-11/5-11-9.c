#include<stdio.h>
#include<stdlib.h>
void Temperatures(const double T);
int main(void)
{
    double Temperature_F;
    int status;
    printf("输入华氏温度：");
    status=scanf("%lf",&Temperature_F);


    while (status==1)
    {
        
        Temperatures(Temperature_F);
        
        printf("输入华氏温度：(q to quit)");
        status=scanf("%lf",&Temperature_F);

    }
    system("pause");
    return 0;

}
void Temperatures(const double T)
{
    double Temperature_C,Temperature_K;
    Temperature_C=5.0/9.0*(T-32.0);
    Temperature_K=T+273.16;

    printf("摄氏温度：%.2lf\n",Temperature_C);
    printf("开氏温度：%.2lf\n",Temperature_K);
    printf("\n");
}
