#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<iso646.h>

#define STOP '#'

int main(void)
{
    char c;
    unsigned n_character=0;

    printf("输入文字（# to end）:");
    while((c=getchar())!=STOP)
    {   
        
        n_character++;
        if (n_character%8==0)
            printf("\n");
        
        if(c=='\n')
            printf("'\\n'-%03d",c);
            
        else if (c=='\t')
            printf("'\\t'-%03d",c);
        
        else
            printf (" %c-%03d ",c,c);
    }

    system("pause");
    return 0;    

}