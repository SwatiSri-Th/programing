#include<stdio.h>
int main()
{
	int i,a;
	printf("\n First 50 positive integers that are divisible by 7 : ");
	a=7;
	for(i=1;i<=50;i++)
	{
	printf("\n %d",a);
	a=a+7;
    }
}
