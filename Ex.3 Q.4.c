#include<stdio.h>
int main()
{
	int a,b,op;
	printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
	printf("Enter the value of a & b: ");
	scanf("%d",&a,&b);
	printf("Enter your choice : ");
	scanf("%d",&op);
	switch (op)
	{
		case 1 :
		printf("Sum of %d and %d is :%d",a,b,a+b);
		break;
		case 2:
		printf("Difference of %d and %d is : %d",a,b,a-b);
		break;
		case 3:
		printf("Product od %d and %d is : %d",a,b,a*b);
		break;
		case 4:
		printf("Division of the Two number is %d:",a/b);
		break;
		default:
			printf("Enter your correct choice.");
			break;
	}
	getch();
	return 0;
	}
