#include<stdio.h>
#include<math.h>
int main()
{
	int p[20] ,i,j,k,n,sum=0,product=1;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
	  scanf("%d",&p[k]);
	}
	
	printf("\n Even numbers from 0 to %d are :\n ",n);
	
	for(i=0;i<n;i++)
	{
		if(p[i]%2==0)
		{
			printf("%d",p[i]);
			sum=sum+p[i];
		}
	}
	printf(" \n Sum of all the even numbers from 0 to %d  = %d\n",n,sum);
	
	printf("Odd numbers from 0 to %d are : \n ",n);
	
	for(j=1;j<n;j++)
	{
		if(p[j]%2!=0)
		{
			printf("%d",p[j]);
			product= product*p[j];
		}
	}
	printf("\n Product of all the odd numbers from 0 to %d = %d",n,product);
}
