#include <stdio.h>
#include<stdlib.h>

int j=1;
int main()
{ 
    register int a=1;
    int* b;
    b=&a;
    if(1)
    {
        int a=2;
        printf("%d",*b);
    }

    system("pause");
    return 0;

}