#include<stdio.h>
#include<conio.h>
/*
int main()
{
	int a,b,sum;
	printf("Enter any two number",a,b );
	scanf("%d %d",&a,&b);
	sum = a+b;
	printf("The result of %d %d is %d",a,b);
	return 0;
}
*/
struct bank
{
	char name[30];
	int phone_no;
	char address[50];
};
int main()
{
	struct bank s;
	printf("\n enter name: ");
	gets(s.name);
	printf("\n enter phone no: ");
	scanf("%d",&s.phone_no);
	gets(s.address);
	printf("\n enter the address: ");
	gets(s.address);
	puts(s.name);
	printf("%d\n",s.phone_no);
	puts(s.address);	
	}



