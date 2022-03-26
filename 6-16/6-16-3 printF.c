#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char letter='F';
    int i,j,k;

    for (i=1;i<=6;i++)
    {
        for (j=0,letter='F';j<i;letter--,j++)
        {
            printf("%c",letter);
            
        }

    printf("\n");
    
    }
    system("pause");
    return 0;
}