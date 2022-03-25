#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main(void)
{
    unsigned long num,div;
    bool isPrime;

    printf("输入一个正整数(q to quit):");
    while(scanf("%lu",&num)==1){
        for(div=2,isPrime=true;div<=sqrt(num);div++){
            if (num%div==0){
                isPrime=false;
                
                if(div*div!=num)
                    printf("%lu可以被%lu和%lu整除\n",num,div,num/div);
                else
                    printf("%lu可以被%lu整除\n",num,div);    

            }
            
    
    
        }
        if (isPrime)
            printf("%lu是质数\n",num);
        else
            printf("%lu不是质数\n",num);
        printf("输入一个正整数(q to quit):");
        
        

    
    }
    printf("over\n");
    system("pause");
    return 0;
}