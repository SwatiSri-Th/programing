#include<stdio.h>
int main()
{
	int l,b,area,peri;
	printf("Enter length first and then breadth of the rectangle:\n");
	scanf("%d %d",&l,&b);
	area = 1 * b;
	peri = 2*( l+b);
	if (area < peri)
	{
		printf("Area of the rectangle is bigger than perimeter");
	}
	else
	{
		printf("Perimeter of the rectangle is bigger than area");
	}
	return 0;
}
