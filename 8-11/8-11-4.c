#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>

int main (void)
{
    char ch,prevCh;
    int wordAlphaCounter=0 , sumWord=0 , wordCounter=0 ;
    float wordAveragr=0;
    
    
    while( (ch=getchar())!= EOF )
    {
        if(isalpha(ch))
        {
            wordAlphaCounter++;
            sumWord=wordAlphaCounter+sumWord;

        }            
           

        if(isalpha(prevCh) && (ispunct(ch)||isspace(ch)))
        {    
            wordCounter++;
            wordAlphaCounter=0;
        }
        prevCh=ch;

    }    

    wordAveragr = (float)sumWord/(float)wordCounter;

    printf("单词平均字母数:%.2f\n",wordAveragr);
    system("pause");        

            


    

    return 0;

}