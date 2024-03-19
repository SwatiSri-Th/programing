#include<stdio.h>
int main()
{
	int i,j,n,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i*i*i;
		sum=sum+j;
		printf("\n cube of a given integers are %d",j);
	}
	 printf("\n sum of a given integer are %d",sum);
}
