#include<stdio.h>
int main()
{
	int choice;
	printf("Press 1 to GO\n");
	printf("Press 2 to SLOW DOWN \n");
	printf("Press 3 to STOP\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1 :
		printf("\n GO");
		break;
		case 2 :
		printf("\n SLOW DOWN");
		break;
		case 3 :
		printf("\n STOP");
		break;
		default :
		printf("\n invalid");
		break;	
	}
	return 0;
}
