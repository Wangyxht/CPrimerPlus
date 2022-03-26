#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    unsigned i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("$");
        printf("\n");
    
    }
    system("pause");
    return 0;
}