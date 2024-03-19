#include<stdio.h>
int main()
{
	int a,i=1,sum=0;
	printf("Enter the number of term : ");
	scanf("%d",&a);
	int x=1;
	for(i=1;i<=a;i++)
	{
		printf("%d",x);
		if(i<a)
		{
			printf("+");
		}
		sum=sum+x;
		x=(x*10)+1;
	}
	printf("\n The sum of the series = %d",sum);
}
