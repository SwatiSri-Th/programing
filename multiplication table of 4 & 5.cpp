#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=4;i<=5;i++)
	{
		printf("\n multiplication table of  %d",i );
	
   	for(j=1;j<=10;j++)
	{
        k=i*j;
		printf("\n %d*%d=%d",i,j,k);
		
    }
	}
	
}
