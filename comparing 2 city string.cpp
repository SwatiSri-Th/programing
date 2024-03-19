#include<stdio.h>
#include<string.h>
int main()
{
	char city1[20];
	char city2[20];
	int p=0;
	printf("Enter city1 : ");
	gets(city1);
	printf("Enter city2 : ");
	gets(city2);
	p=strcmp(city1,city2);
	printf("Comparing city1 and city2 is %d",p);
	
}
