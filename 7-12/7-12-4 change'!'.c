#include<stdio.h>
#include<stdlib.h>

#define Stop '#'
int main(void)
{
    char c;
    unsigned Count_A=0, Count_B=0;

    while((c=getchar())!=Stop)
    {
        switch(c)
        {
            case '.': 
                printf("!");
                break;
            case '!': 
                printf("!!");
                break;
            default:
                putchar(c);
        }

    
    }

    

    system("pasue");
    return 0;
}