#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    unsigned i , j;
    char letter='A';

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++,letter++)
            printf("%c",letter);
        printf("\n");
    }

    system ("pause");
    return 0;

    
}