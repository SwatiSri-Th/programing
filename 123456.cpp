#include<stdio.h>
int main()
{
	int arr[5],i,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
   }
	for(i=0;i<n;i++)
	{
	printf("arr[%d]=%d \n",i+1,arr[i]);
   } 
}
	

