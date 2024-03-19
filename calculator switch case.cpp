#include<stdio.h>
int main()
{
	int n1,n2;
	int result;
	char ch;
	printf("Enter an expression: ");
	scanf("%d%c%d",&n1,&ch,&n2);
	
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
			result=n1/n2;
			break;		
	}
	printf("Result = %d",result);
	return 0;
}
