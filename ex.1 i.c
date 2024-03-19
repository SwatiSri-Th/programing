#include <stdio.h>
int main()
{
	int a,b;
	int sum,sub,mult;
	float div;
	printf("Enter any two number:");
	scanf("%d %d",&a,&b);
	sum= a+b;
	sub= a-b;
	mult=a*b;
	div= a/b;
	printf("SUM = %d\n",sum);
	printf("DIFFERENCE = %d\n",sub);
	printf("PRODUCT = %d",mult);
	printf("QUOTIENT = %d",div);
	return 0;
	}
