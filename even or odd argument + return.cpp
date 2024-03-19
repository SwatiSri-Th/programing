#include<stdio.h>
int func(int);
int main()
{
	 int n;
	 printf("Enter a number : ");
	 scanf("%d",&n);
	 
	 if(n%2==0)
	 {
	 	printf("%d is even number",n);
	 }
	 else
	 {
	 	printf("%d is odd number",n);
	 }
}
int func(int n)
{
	return n%2==0;
}
