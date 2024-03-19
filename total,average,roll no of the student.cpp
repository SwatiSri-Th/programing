#include<stdio.h>
int main()
{
	int phy,chem,maths,r,total,average;
	printf("Enter the roll no. of the student : ");
	scanf("%d",&r);
	printf("Enter the Marks of the student : ");
	scanf("%d %d %d",&phy,&chem,&maths);
	
	total= phy+chem+maths;
	average = total/3;
	
	//printf("roll no. of the student : ",r);
	printf("\n total marks of the student is %d",total);
	printf("\n average marks of the student is %d ",average);
}
