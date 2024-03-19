#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *p;
	printf("Enter the no. of the element : ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("Enter the number ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	printf("\n Reverse elements are as follows : ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(p+i));
	}	
}
