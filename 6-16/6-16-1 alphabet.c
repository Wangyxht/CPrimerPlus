#include<stdio.h>
#include<stdlib.h>

#define size 26
int main (void)
{
    char alphabet[size],letter='a';
    unsigned i;

    for(i=0;i<size;letter++,i++)  
    
    {
        alphabet[i]=letter;
    }
    
    for(i=0;i<size;i++)
    {
        printf("%c ",alphabet[i]);
    }

    system("pause");
    return 0;
}