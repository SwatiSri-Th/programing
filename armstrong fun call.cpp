#include<stdio.h>
void armstr(int,int,int,int);
int main()
{
	int r,j,sum=0,k;
	printf("Enter a number ");
	scanf("%d",&k);
	armstr(r,j,sum,k);
	while(k>0)
	{
		r=k%10;
		j=r*r*r;
		sum=sum+j;
		k=k/10;
	}

}
void armstr(int r,j,sum,k);
{
	printf("\n The armstrong is %d",k);
}
