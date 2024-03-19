#include<stdio.h>
int main()
{
	int a,b;
	int *big,*xptr,*yptr;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	xptr=&a;
	yptr=&b;
	if(*xptr>*yptr)
	big=xptr;
	else
	big=yptr;
	printf("%d is the biggest number",*big);
}
