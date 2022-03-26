#include<stdlib.h>
#include<stdio.h>
int main (void)
{
    float size_file,speed,download_time;

    printf("输入文件大小（MB）:");
    scanf("%f",&size_file);
    printf("输入下载速度（Mb/s):");
    scanf("%f",&speed);

    download_time=size_file/(speed/8);
    
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size_file);
    printf("download in %.2f seconds",download_time);

    system("pause");
    return 0;

}