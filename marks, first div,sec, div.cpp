#include<stdio.h>
int main()
{
	int a;
	printf("Enter the  marks of the student : ");
	scanf("%d",&a);
	{
		if(a>=75)
		printf("Distinction",a);
		
		else if(a>60 && a<75)
		printf("%d is first division",a);
		
	    else if(a>50 && a<60)
	    printf("%d is second division",a);
	    
		else if(a>40 && a<50)
	    
	    	printf("%d is third division",a);
	    
	    else
	    
	    	printf("fail");

	    
	    return 0;
	}
}
