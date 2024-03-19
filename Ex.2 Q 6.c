#include<stdio.h>
int main()
{
	int a,b,res;
	char c;
	printf("Enter any one operator +, -,*,/ \n");
	scanf("%c",&c);
	printf("Enter any two number \n");
	scanf("%d %d",&a,&b);
	switch(c)
	{
		case '+' : res=a+b;
		printf("The sum is %d",res);
		break;
		case'-' : res=a-b;
		printf("The difference is %d",res);
		break;
		case '*' : res=a*b;
		printf("The product is %d",res);
		break;
		case '/' : res=a/b;
		printf("The quotion is %d",res);
		break;
		default : printf ("Invalid entry");
	}
	getch();
	return 0;
}
