#include<stdio.h>
int main()
{
	int a,b,result=0;
	char op;
	printf("choose your operator : ");
	scanf("%c",&op);
	printf("Enter any two number : ");
	scanf("%d %d",&a,&b);
	
	switch(op)
	{
		case '+':
			result= a+b;
			printf("addition of %d + %d = %d",a,b,result);
			break;
		case '-' :
		    result=a-b;
			printf("substraction %d - %d =%d",a,b,result);
			break;
		case '*':
			result=a*b;
			printf("Multiplication of %d * %d  =%d",a,b,result);
			break;
		case '/' :
		    result=a/b;
			printf("division of %d/%d =%d",a,b,result);
			break;
		default :
		printf("number is invalid");
		break;			
	}
	
}
