#include<stdio.h>
int main()
{
	int a,i=1,sum=0,x=1;
	printf("Enter the number of term : ");
	scanf("%d",&a);
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
