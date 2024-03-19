#include<stdio.h>
void fact();
int main()
{
	fact();
}
  void fact()
  {
  	int i,j,k=1;
  	printf("Enter a number : ");
  	scanf("%d",&j);
  	
  	for(i=1;i<=j;i++)
  	k=k*i;
  	printf("\n Factorial of a %d is %d",j,k);
  }
