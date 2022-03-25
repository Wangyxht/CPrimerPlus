#include<stdlib.h>
#include<stdio.h>
int main(void)
{
    char firest_name[30],second_name[30];
    printf("Enter your name:\n");
    scanf("%s %s",firest_name,second_name);
    printf("%s %s", second_name,firest_name);
    system("pause");
    return 0;
}