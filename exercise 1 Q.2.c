#include <stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,soln2;
	float soln1, soln3;
	printf("Enter the four numbers :\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	soln1 = (float) a + b * c / d ;
	soln2 = a - b * d + b;
	soln3 = (float) c/d + a*c;
	printf("num1+num2*num3/num4=%f\n",soln1);
	printf("num1-num2*num4+num2=%d\n",soln2);
	printf("num3/num4+num1*num3=%f\n",soln1);
	return 0; 	
}
