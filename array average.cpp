#include<stdio.h>
int main()
{
	int arr[5],n,i,total,average=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		total=total+arr[i];
		average=total/n;
	}
	printf("the average is %d",average);
}
