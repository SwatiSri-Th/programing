#include<stdio.h>
int main()
{
	int i,j,sum=0;
	printf("Prime number between 1-100 : \n");
	
	for(i=1;i<=100;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		{
			sum++;
		}
		printf("%d\n",i);
	}
}
