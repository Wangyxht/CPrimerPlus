#include<stdio.h>
#include<stdlib.h>

void Print(char ch ,int line , int list);

int main(void)
{
    char ch;
    int list , line;
    short int conditionLine ,conditionList, conditionchar;

    printf("请输入需要打印的字符：");
    conditionchar=scanf("%c",&ch);

    printf("请输入需要打印的行数：");
    conditionLine=scanf("%d",&line);

    printf("请输入需要打印的列数：");
    conditionList=scanf("%d",&list);

    Print(ch,line,list);

    system("pause");
    return 0;
    


    system("pause");
    return 0;
}


void Print(char ch ,int line,int list)
{
    int counterLine=0, counterList=0;
    for (;counterList<list;counterList++)
    {    
        for(;counterLine<line;counterLine++)

        {
            putchar(ch);
        }
        putchar('\n');
        counterLine=0;
    }
   return;
}