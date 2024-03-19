#include<stdio.h>
int main()
{
	int arr[10],n,i,large1=0,large2=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	large1=arr[i];
	for(i=0;i<n;i++)
	{
		if(arr[i]>large1)
		large1=arr[i];
	}
}
