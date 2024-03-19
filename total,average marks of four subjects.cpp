#include<stdio.h>
int main()
{
	int eng,maths,phy,chem,total,average;
	printf("enter the marks of the students : ");
	scanf("%d %d %d %d",&eng,&maths,&phy,&chem);
	
	total= eng + maths + phy + chem;
	average= total/4;
	
	printf("total marks of thde student is %d",total);
	printf("\n average marks of the student is %d",average);
	
	return 0;
}
