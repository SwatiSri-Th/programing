#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	switch(n)
	{
		case 1:
			y=1+x;
			printf("%d",y);
			break;
		case 2:
		   y=1+x/n;
		   printf("%d",y);
		   break;	
		case 3:
		    y=1+pow(x,n);
			printf("%d",y);
			break;
		default:
			y=1+n*x;
			printf("%d",y); 
		    	
				
	}
}

