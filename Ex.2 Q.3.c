#include <stdio.h>
int main()
{
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	if (age<8)
	{
		printf("Child");
	}
	else if((age>=10)&&(age<19))
	{
		printf("Adolescent");
	}
	else if(age>19)
	{
		printf("Adult");
	}
	getch();
}
