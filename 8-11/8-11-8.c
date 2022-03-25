#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

void MenuOperation(void);
double GetNumberA(void);
double GetNumberB(void);

int main (void)
{
    char operationChoice;
    double numberA , numberB, result;

    MenuOperation();
    
    while((operationChoice=getchar())!='q')
    {
        switch(operationChoice)
        {
            case 'a':
                numberA=GetNumberA();
                numberB=GetNumberB();
                result=numberA+numberB;
                printf("计算结果为%lf  \n" ,result);
                MenuOperation();
                break;
            case 'b':
                numberA=GetNumberA();
                numberB=GetNumberB();
                result=numberA-numberB;
                printf("计算结果为%lf  \n" ,result);
                MenuOperation();
                break;

            case'c':
                numberA=GetNumberA();
                numberB=GetNumberB();
                result=numberA*numberB;
                printf("计算结果为%lf  \n" ,result);
                MenuOperation();
                break;

            case 'd':
                numberA=GetNumberA();
                numberB=GetNumberB();
                    while(numberB==0)
                    {
                        printf("0 不能作为分母上的数值,请重试。\n");
                        numberB=GetNumberB();
                            
                    }
                result=numberA/numberB;
                printf("计算结果为%lf  \n" ,result);
                MenuOperation();
                break;
            default:
                printf("输入有误，请检查后重试\n");

        }    
        while (getchar()!= '\n')
        {   
            MenuOperation();    
            continue;
        }
        
    
    }

    printf("运行结束\n");
    system("pause");
    return 0;

            
                            

        
}

void MenuOperation (void)
{
    printf("------------------------------------------\n");
    printf("请选择需要进行的操作：\n");
    printf("a) 加法                 b)  减法\n");
    printf("c) 乘法                 d)  除法\n");
    printf("q)退出\n");
    printf("------------------------------------------\n");
}

double GetNumberA (void)
{
    double number;
    char ch;

    printf("请输入第一个数值:");
    while(scanf("%lf",&number)!=1)
    {
        while((ch=getchar())!='\n')
            printf("输入有误，检查输入后重试。\n");
            printf("请输入第一个数值:");
            continue;

    }
    
    

    return number;
}

double GetNumberB (void)
{
    double number;
    char ch;

    printf("请输入第二个数值:");
    while(scanf("%lf",&number)!=1)
    {
         while((ch=getchar())!='\n')
            printf("输入有误，检查输入后重试。\n");
            printf("请输入第二个数值:");
            continue;


    }
    
    

    return number;
}