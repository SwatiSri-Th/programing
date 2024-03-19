#include<stdio.h>
#include<string.h>
int main()
{
	char city1[20];
	char city2[30];
	printf("Enter city1 : ");
	gets(city1);
	printf("Enter city2 : ");
	gets(city2);
	strcpy(city1,city2);
	printf("Copy city2 in city1 : %s",city1);
	
}
