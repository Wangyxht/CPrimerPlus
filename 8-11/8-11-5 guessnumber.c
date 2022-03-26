#include<stdio.h>
#include<stdlib.h>

#define rangeMin 0
#define rangeMax 100


int main (void)
{
    int guess=50  , guessMax=rangeMax , guessMin=rangeMin;
    char ch;

    printf("猜数游戏:请设定一个%d-%d之内的答案。\n",rangeMin,rangeMax);
    printf("下面所显示的数字与正确答案是否一致？若是则输入 y \n");
    printf("若显示的数比答案更大:输入>,若显示的数比答案更小，输入：< .\n");
    printf("答案是否为：%d\n",guess);

    while( (ch=getchar())!='y'  )
    {
        if (ch == '>')
        {
            guessMin=guess;
            guess=(guessMin+guessMax)/2;
            printf("答案是否为：%d\n",guess);
            
            
        }
    
        else if(ch == '<')
        {
            guessMax=guess;
            guess=(guessMax+guessMin)/2;
            printf("答案是否为：%d\n",guess);
            
        }
        else
        {
            printf("您输入有错误，请重新输入\n");
            
        }
        while(getchar()!='\n')
        {
            continue;
        }
    
    }

    printf("已经猜中答案%d\n",guess);
    system("pause");
    return 0;
}








