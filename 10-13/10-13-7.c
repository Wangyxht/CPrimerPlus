#include<stdio.h>
#include<stdlib.h>

#define ROWS 12
#define COLS 5

void ptr_arr(float*,float*,int);

int main(void)
{
    float rain [COLS] [ROWS]=
    {   
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.8, 7.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2},        
    }; 

    float target[COLS] [ROWS];
    int counter=0;



    float (*ptrArr)[ROWS]=rain;

    while(counter<COLS)
    {
        ptr_arr(rain[counter],target[counter],ROWS);
        counter++;
    }

    system("pause");
    return 0;

}





void ptr_arr(float* source, float* target, int size)
{
    int counter;
    for (counter=0;counter<size;counter++)
    {
        *(target+counter)=*(source+counter);

    }

    return;
}

