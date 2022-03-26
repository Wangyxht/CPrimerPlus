#include<stdio.h>
#include<stdlib.h>

void copy_arr(float*,float*,int);
void ptr_arr(float*,float*,int);
void copy_ptrs(float*,float*,float*);

int main (void)
{
    float source[5]={ 1.1, 2.2, 3.3, 4.4, 5.5 };
    float target1[5];
    float target2[5];
    float target3[5];

    copy_arr(source,target1,5);
    ptr_arr(source,target2,5);
    copy_ptrs(source,target3,source+5);


    system("pause");
    return 0;

}
void copy_arr(float source[],float target[],int size)
{
    int counter;
    for(counter=0;counter<size;counter++)
    {
        target[counter]=source[counter];
    }

    return;
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



void copy_ptrs(float* source, float*target, float* sourceend)
{
    int counter=0;
    while(source<sourceend)
    {
        *(target+counter)=*source;
        counter++,source++;
    }

    return;

}
