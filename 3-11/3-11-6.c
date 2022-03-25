#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float height_inch,height_cm;

    printf("输入身高（英寸）：\n");
    scanf("%f",&height_inch);
    height_cm=height_inch*2.54;
    printf("身高（厘米）为：%f\n",height_cm);
    system("pause");

    return 0;

}