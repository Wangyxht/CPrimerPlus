#include<stdio.h>
void ic(void);//º¯ÊýÔ­ÐÍ
void br(void);
int main(void)
{
	br();
	printf(",\a");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	return 0;

}

void ic(void)
{
	printf("India, China");
}
void br(void)
{
	printf("Brazil,Russia");
}