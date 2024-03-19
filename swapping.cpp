#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two values to swap \n");
	scanf("%d %d",&a,&b);
	printf("before swapping a=%d,b=%d",a,b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("after swapping a=%d,b=%d",a,b);
	return 0;
	
}
