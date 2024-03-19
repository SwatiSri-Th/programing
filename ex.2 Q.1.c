#include<stdio.h>
#include<conio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	printf("Enter 1 angles of triangle: = \n");
	scanf("%d",&angle1);
	printf("Enter 2 angles of triangle: = \n");
	scanf("%d",&angle2);
	printf("Enter 3 angles of triangle: = \n");
	scanf("%d",&angle3);
	sum = angle1 + angle2 +angle3;
	if (sum == 180 &&angle1 !=0 &&angle2 !=0 &&angle3 !=0)
	{
		printf("\n valid triangle.\n\n");
	}
    else 
	{
		printf("\n Not valid triangle.\n\n");
	}
	return 0;
}
