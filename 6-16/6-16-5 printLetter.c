#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char letter,letter_Start,space=' ';
    unsigned i,j;
    
    
    printf("输入一个大写字母：");
    scanf("%c",&letter);
    letter_Start=letter;

    for(i=1;i<=5;i++)
    {   
        for(j=1;j<=5-i;printf(" "),j++);
        for(letter=letter_Start,j=1;j<=i;printf("%c",letter),j++,letter++);
        for(letter=letter_Start+(i-2),j=1;j<i;printf("%c",letter),j++,--letter);
            
        printf("\n");
    }
    system("pause");
    return 0;
}