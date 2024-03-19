#include<stdio.h>
int main()
{
	int arr[2][3],i,j;
	printf("Enter the element of the matrix :\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
			
		}
	
    }
	printf("The matrix is :\n ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose of the matrix : \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	
 
}
