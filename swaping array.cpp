#include<stdio.h>
int main()
{
	int x[10],n,i,temp,j;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(x[i]>x[j])
		{
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	printf("%d",x[i]);
}
