#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (void)
{
    int num_max,num_min,num;
    
    printf("请输入上限数值:");
    scanf("%d",&num_max);
    printf("请输入下限数值:");
    scanf("%d",&num_min);
    printf("\n   整数          平方          立方\n");


    
    for(num=num_max;num>=num_min;num--)
    {
         
         printf("--------------------------------------\n");
         printf("%6d  ",num);
         printf("%10d  ",num*num);
         printf("%10d   \n",num*num*num);


    }
    printf("--------------------------------------\n");
   system("pause");
   return 0;
} 