#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("\n %d is positive",a);
	}
	
	else if(a<0)
	{
		printf("\n %d is negetive",a);
	}
	else
	{
		printf("\n %d is zero",a);
	}
	return 0;
}
