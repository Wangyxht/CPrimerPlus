#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float a;
    printf("输入小数\n");
    scanf("%f",&a);
    printf("the input is %.1f or %.1e\n",a,a);
    printf("the input is %+.3f or %.3e\n",a,a);

    system("pause");

    return 0;
}