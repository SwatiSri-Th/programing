#include<stdio.h>
int main()
{
	int i,n,tl=0,t2=1, nextTerm;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Fibonacci Series: ");
	for(i = 1; i <=n; ++i)
	{
		printf("%d,",tl);
		nextTerm = tl + t2;
		tl = t2;
		t2 = nextTerm;
	}
	getch();
	return 0;
}
