#include<stdio.h>
int main()
{
	int arr[100], n;
	int product,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("\nEnter elements : \n");
	for(i=0; i<n; i++)
	{
		printf("Enter arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	product=1;
	for(i=0; i<n; i++)
	{
		product=product*arr[i];
	}
	printf("\nProduct of array is : %d\n",product);
	return 0;
		}
