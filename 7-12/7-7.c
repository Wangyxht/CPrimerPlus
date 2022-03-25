#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

#define STOP '|'

int main(void)
{
    char c;
    char prev;
    int n_char = 0L;
    int n_line = 0;
    int n_words = 0;
    int p_line = 0;
    bool inword = false;

    prev='\n';

    printf("输入一段文字进行统计：(“|”结尾)\n");
    while((c=getchar())!=STOP){
        n_char++;
        if (c == '\n')
            n_line++;
        if(!isspace(c) && !inword)
            inword=true;
            inword++;
        if(isspace(c) &&  inword)
            inword=false;
        prev=c;



    }
    if (prev != c){
        p_line=1;
    
    }
    printf("字数：%ld 行数：%d 单词数：%d 不完整行数：%d\n", n_char, n_line ,n_words ,p_line);
    system("pause");
    return 0;

}   
