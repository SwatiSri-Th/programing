#include<stdio.h>
int main()
{
	int i;
	printf("\n first 50 positive integer divisible by 7 : ");
	for(i=1;i<=50;i++)
	if(i%7==0)
	{
		printf("\n %d",i);
	}
	return 0;
}
