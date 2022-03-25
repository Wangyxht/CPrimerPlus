#include<stdio.h>
int main(void)
{
    float fl;
    printf("Enter a float number:\n");
    scanf("%f",&fl);
    printf("fixed-point notation:%f\n",fl);
    printf("exponential notation:%e\n",fl);
    printf("p notation:%a23",fl);
    return 0;
}