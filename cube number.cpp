#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i*i*i;
		printf("\n cube of a given integers are %d",j);
	}
	
}
