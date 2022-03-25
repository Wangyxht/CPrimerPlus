#include<stdio.h>
#include<stdlib.h>

#define levelOne 8.75
#define levelTwo 9.33
#define levelThree 10.00
#define levelFour 11.20
/*定义四个薪资等级*/

#define overTime 40 //定义加班时间边界
#define overTimeRate 1.5 //定义加班薪资倍率

#define lowRate 0.15 //定义最低税率

#define mediumRateMoneyRange 300 //定义中等税率起征点
#define mediumRate 0.20 //定义中等税率

#define highRateMoneyRange 150 // 定义最高税率距离中等税率起征点的距离
#define highRate 0.25//定义最高税率

void Menu(void);//定义菜单函数
float TotalSalary (const int moneylevel);
float Tax(const float totalmoney);

int main (void)
{
    unsigned level;
    float moneyTotal,taxMoney,moneyBack;
    
    do
    {
    Menu();
    scanf("%u",&level);


        switch (level)
        {
        case 1:
            moneyTotal=TotalSalary(levelOne);
            taxMoney=Tax(moneyTotal);
            printf("工资总数：%f$ 税金：%f$ 净收入：%f$\n",moneyTotal,taxMoney,moneyTotal-taxMoney);
            break;

        case 2:
            moneyTotal=TotalSalary(levelTwo);
            taxMoney=Tax(moneyTotal);
            printf("工资总数：%f$ 税金：%f$ 净收入：%f$\n",moneyTotal,taxMoney,moneyTotal-taxMoney);
            break;

        case 3:
            moneyTotal=TotalSalary(levelThree);
            taxMoney=Tax(moneyTotal);
            printf("工资总数：%f$ 税金：%f$ 净收入：%f$\n",moneyTotal,taxMoney,moneyTotal-taxMoney);
            break;

        case 4:
            moneyTotal=TotalSalary(levelFour);
            taxMoney=Tax(moneyTotal);
            printf("工资总数：%f$ 税金：%f$ 净收入：%f$\n",moneyTotal,taxMoney,moneyTotal-taxMoney);
            break;
        case 5:
            break;
    
        default:
            printf("重试\n");
            getchar();
            break;
        }
    }
    while(level!=5);

    return 0;

    

}


void Menu (void)
{
    printf("***************************************************************\n");
    printf("输入序号以选择您的薪资等级。\n");
    printf("1)%.2f/hr                          2)$%.2f/hr\n",levelOne,levelTwo);
    printf("3)%.2f/hr                          4)$%.2f/hr\n",levelThree,levelFour);
    printf("5 to quit\n");
    printf("***************************************************************\n");
}

float TotalSalary (const int moneylevel)
{   
    float weekTime;
    float money_Total;
    

    printf("输入您每周工作的时间：\n");
    scanf("%f",&weekTime);

    if (weekTime <= overTime)
        money_Total=weekTime*moneylevel;
    else
        money_Total=overTime*money_Total+(weekTime-overTime)*moneylevel*overTimeRate;
    return money_Total;


}

float Tax(const float totalmoney)
{
    float taxMoney;
    if(totalmoney<=mediumRateMoneyRange)
        taxMoney=totalmoney*lowRate;
    else if(totalmoney<=mediumRateMoneyRange+highRateMoneyRange)
        taxMoney=mediumRateMoneyRange*lowRate+(totalmoney-mediumRateMoneyRange)*mediumRate;
    else
        taxMoney=lowRate*mediumRateMoneyRange+mediumRate*highRateMoneyRange+(totalmoney-mediumRateMoneyRange-highRateMoneyRange)*highRate;

    return taxMoney;
        
}