#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 31

char* Strnpy(char* ,char* ,int);
char* S_get(char*,int);

int main(void)
{   
    char strA[SIZE];
    char strB[SIZE];

    puts("请输入字符串A：");
    S_get(strA,SIZE);
    puts("请输入字符串B：");
    S_get(strB,SIZE);
    Strnpy(strA,strB,6);

    puts(strA);

    system("pause");
    return 0;
}

char* S_get(char* str,int size)
{
    int i=0;
    char* rev_val=fgets(str,size,stdin);
    
    if(rev_val)
    {
        while(str[i] !='\0' && str[i]!='\n')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else        
            while(getchar()!='\n')
                    continue;

        
    }

    return rev_val;
}

char* Strnpy(char* strA ,char* strB ,int targetsize)
{
    int surplusSize;
    int startSize;
    int counter=0;
    
    startSize=strlen(strA);
    surplusSize=SIZE-startSize;
    if (surplusSize>targetsize)
    {
        for(counter<targetsize;counter<=strlen(strB) && counter<targetsize;counter++)
        {
            *(strA+startSize+counter)=*(strB+counter);
        }

        strA[startSize+counter]='\0';
    }
    return strA;
}