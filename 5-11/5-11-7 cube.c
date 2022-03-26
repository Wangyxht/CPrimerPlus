#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Cube(const double n);
int main (void)
{
    double number;
    printf("输入待求立方的数：");
    scanf("%lf",&number);

    Cube(number);

    system("pause");
    return 0;
}
void Cube(const double n)
{
    double Cube_n;
    Cube_n=pow(n,3);
    printf("%.3lf^3=%.3lf",n,Cube_n);

}