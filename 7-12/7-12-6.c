#include<stdio.h>
#include<stdlib.h>

#define Stop '#'

int main (void)
{
    char ch,prev_ch;
    unsigned Count_ei=0;

    while((ch=getchar())!=Stop)
    {
        

        if(prev_ch=='e' && ch=='i')
        {
            Count_ei++;
        }

        prev_ch=ch;
        
    }
    printf("ei共出现%u次\n",Count_ei);
    
    system("pause");
    return 0;
}