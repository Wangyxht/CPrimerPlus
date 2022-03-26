#include<stdio.h>
#include<stdlib.h>

#define Dunbar 150

int main (void)
{
    int friends,week;

    for(friends=5,week=1; friends<Dunbar ; week++)
    {
        friends=(friends-week)*2;
    }
    printf("%d weeks , friends>DUNBAR'S NUMBER\n",week);
    
    system("pause");
    return 0;
}