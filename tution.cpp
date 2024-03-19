#include<stdio.h>
int main()
{
	int i=-3,j=1,k=1,m;
	m=k && --j || ++i;
	printf("%d %d %d %d\n",i,j,k,m);
	return 0;
}
