#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (void)
{
    char firstname[30],secondname[30];
    int wide_a,wide_b;
    
    printf("enter your first name:\n");
    scanf("%s",firstname);
    printf("enter your second name:\n");
    scanf("%s",secondname);
    
    wide_a= strlen(firstname);
    wide_b= strlen(secondname);

    printf("%s %s\n",firstname,secondname);
    printf("%*d %*d\n",wide_a,wide_a,wide_b,wide_b);\
    printf("%s %s\n",firstname,secondname);
    printf("%-*d %-*d\n",wide_a,wide_a,wide_b,wide_b);

    system("pause");
    return 0;
}