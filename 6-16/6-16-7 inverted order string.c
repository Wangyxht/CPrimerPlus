#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main (void)
{
    char word[30];
    int length,i,temp;
    printf("Enter a word:");
    scanf("%s",word);
    printf("\nword:%s\n",word);
    length=strlen(word)-1;

    for(i = 0 ;i < length ; i++, length--){
        temp=word[i];
        word[i]=word[length];
        word[length]=temp;
    }
    for (i = 0; i <strlen(word) ; printf("%c",word[i]), i++);

    printf("\n");
    system("pause");
    return 0;
    
}