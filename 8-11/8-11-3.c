#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char ch,prev;
    unsigned counterWordsL=0, counterWordss=0;

    while ((ch = getchar())!= EOF)
    {
        if(isupper(ch))
            counterWordsL++;
        if(islower(ch))
            counterWordss++;

    }
    
    printf("大写字母：%d个 小写字母：%d个\n",counterWordsL,counterWordss);
    system("pause");
    return 0;

}