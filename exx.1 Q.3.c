#include<stdio.h>
#include <conio.h>
#define PI 22/7
int main()
{
	float r, resu;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	resu = 2 *(PI * r*r);
	printf("area of the rectangle when the radius of the circle is %f is \n",r);
	printf("%f", resu);
	getch();
	return 0;
}
