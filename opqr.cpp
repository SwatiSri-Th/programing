#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,sum=0,product=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("\n Even numbers from 0 to %d are :\n ",n);
	
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf(" \n Sum of all the even numbers from 0 to %d  = %d\n",n,sum);
	
	printf("Odd numbers from 0 to %d are : \n ",n);
	
	for(j=1;j<n;j++)
	{
		if(j%2!=0)
		{
			printf("%d",j);
			product= product*j;
		}
	}
	printf("\n Product of all the odd numbers from 0 to %d = %d",n,product);
}
