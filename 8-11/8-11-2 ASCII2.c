#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char c,prevC;
    char enter='\n' , blank='\t';
    int counter=1;

    while( ( c=getchar() ) !=  EOF)
    {
        if(counter++%10 == 0)
            printf("\n");
        if (c == '\n')
            printf("\\n-%d \n",c);
        else if ( c == '\t')
            printf("\\t-%c ",c);
        else if (c >= 40 )
            printf("%c-%d ",c,c);
        else
            printf("%c-^%c ",c,c+60);


        
    }
    system("pause");
    return 0;


}