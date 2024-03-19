#include<stdio.h>
#include<string.h>
int main()
{
	char city[20];
	char pin[10];
	printf("Enter the city name : ");
	gets(city);
	printf("Enter the pin number : ");
    gets(pin);
	strcat(city,pin);
	printf(" %s ", city,pin);
	
}
