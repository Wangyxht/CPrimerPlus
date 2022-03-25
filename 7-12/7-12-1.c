#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

#define stop '#'

int main (void)
{
    char article, c;
    unsigned long n_space=0, n_line=0, n_character=0;
    bool IS_SPACE  , IS_LINE;

    IS_SPACE=false;
    IS_LINE=false;

    printf("输入文字:\n(# to end)");

    while((c=getchar())!=stop)
    {
        
        if(isspace(c))
        {
            n_space++;
            IS_SPACE=true;
              
        }

        if (c=='\n')
        {
            n_line++;
            IS_LINE=true;
               
        }
        
        if (! IS_LINE && ! IS_SPACE)
        {
            n_character++;
        }
    
    }
    printf("空格数：%lu 换行符数：%lu 所有其他字符数：%lu\n",n_space,n_line,n_character);
    system("pause");
    return 0;
}