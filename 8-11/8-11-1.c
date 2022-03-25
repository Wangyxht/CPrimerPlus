#include<stdio.h>
#include<stdlib.h>

int main (void)
{
    char ch;
    unsigned countChar=0;
    
    printf("输入字符统计字数：\n");
    
    while((ch=getchar())!=EOF)
    {
        countChar++;
    }

    printf("您输入字符总计为%u\n",countChar);
    
    system("pause");
    return 0;

}