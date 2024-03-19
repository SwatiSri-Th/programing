#include<stdio.h>
int main()
{
	int tot, obt, res;
	printf("Enter the total: ");
	scanf("%d",&tot);
	printf("\n Enter the mark obtain");
	scanf("%d",&obt);
	res= res/tot;
	if (res >= 40)
	{
		printf("\n Result is pass");
	}
	else
	{
		printf("\n Result is fail");
	}
	return 0;
}
