#include<stdio.h>
int main()
{
	int a,i;
	long sum=0;
	long int x =1;
	printf("Input the number of term : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		printf("%ld",x);
		if(i<a)
		{
			printf("+");
		}
		sum=sum+x;
		x=(x*10)+1;
	}
	printf("\nThe sum is : %ld\n",sum);
}
