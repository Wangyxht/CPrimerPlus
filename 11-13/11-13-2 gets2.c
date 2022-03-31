#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define STRL 40

char* LoadChar(char*,int);

int main(void)
{
    
    char str[STRL];
        int counter;
    
    printf("请输入一段字符串:");
   
    LoadChar(str,STRL);
   
    puts(str);
    system("pause");
    return 0;

    
}

char* LoadChar(char* str,int size)
{
    char ch;
    int counter=0;

    while((ch=getchar())!=EOF && counter<size)
    {
        if(ch==' '||ch=='\t'||ch=='\n')
            break;
        *(str+counter)=ch;
        counter++;
    }

    return str;
}