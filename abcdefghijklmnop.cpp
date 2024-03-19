#include<stdio.h>
int main()
{
	int i,j,rows,k;
	printf("Enter the no. of rows : ");
	scanf("%d",&rows);
	for(i=rows;i>=1;i--)
	{
		for(j=1;j<=(rows-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=(2*1-i);k++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
