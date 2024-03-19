#include<stdio.h>
int main()
{
	int arr[20],n,i,temp =0,j;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(arr[i]>arr[j+1])
		{
			temp=arr[i];
			arr[i]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	for(j=0;j<n;j++)
	printf("%d",arr[i]);
}
