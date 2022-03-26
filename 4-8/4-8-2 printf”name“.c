#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[60];
    int wide;

    printf("Enter your name:\n");
    scanf("%s",name);
    wide=strlen(name)+3;
    printf("name:\"%s\"\n",name);//打印名字包括双引号
    printf("name:\"%20s\"\n",name);
    printf("name:\"%-20s\"\n",name);
    printf("name:\"%*s\"\n",wide,name);

    system("pause");
    return 0;
}