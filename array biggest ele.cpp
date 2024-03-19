#include<stdio.h>
int main()
{
	int arr[10],i,n,a=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
   }
   a=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>a);
		a=arr[i];
   } 
   printf("The biggest number is %d",a);
}
	

