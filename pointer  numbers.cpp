#include<stdio.h>
int main()
{
	int a,b;
	int *xptr,*yptr;
	printf("Enter the two interger : ");
	scanf("%d %d",&a,&b);
	xptr=&a;
	yptr=&b;
	if(*xptr>*yptr)
	{
		printf("%d is the biggest number",*xptr);
	}
	else
	{
		printf("%d is the biggest number",*yptr);
	}
}
