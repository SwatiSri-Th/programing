#include<stdio.h>
int main()
{
	int i,j,k,c=1;
	for (i=1;i<5;++i)
	{
		for (j=5;j>i;--j);
		printf(" ");
		for(k=1;k<=i;++k)
		{
			printf("%d",c);
			c++;
			printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
