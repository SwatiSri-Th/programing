#include<stdio.h>
int main()
{
	int arr[10],n,i,temp,j;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
	
	for(j=0;j<n-1;j++)
	
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	
}

	for(j=0;j<n;j++)
	printf(" %d",arr[j]);
}
