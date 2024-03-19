#include<stdio.h>
int main()
{
	int a;
	printf("Enter the age 0f the candidate : ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("The person is eligible");
	}
	else
	{
		printf("The person is not eligible");
	}
}
