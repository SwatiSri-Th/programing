#include<stdio.h>
int main()
{
	int n1,n2;
	float result;
	char ch;
	printf("Enter first integer: ");
	scanf("%d",&n1);
	printf("Enter second integer: ");
	scanf("%d",&n2);
	printf("Choose operation to perform (+,-,*,/): ");
	
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':
			result=n1+n2;
			break;
		case'-':
			result=n1-n2;
			break;	
		case'*':
			result=n1*n2;
			break;	
		case'/':
			result=(float)n1/(float)n2;
			break;		
		default:
		    printf("Invalid operation\n");	
	}
	printf("Result: %d %c %d = %f\n",n1,ch,n2,result);
	return 0;
}
