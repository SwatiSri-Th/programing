#include<stdio.h>
int main()
{
	int i=1,j=0,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2!=0)
		{
			j=j+i;
		}
		i++;
	}
	printf("\n Sum of the odd numbers is %d",j);
	
}
