#include<stdio.h>
#include<string.h>
int main()
{
	char st1[30],st2[30];
	int i,j;
	printf("Enter the first string :");
	gets(st1);
	printf("Enter the second string :");
	gets(st2);
	
	while(st1[i]!='\0' && st2[i]!='\0')
	{
		if(st1[i]!=st2[i])
		{
			if(st1[i]>st2[i])
			{
				printf("%s",st1);
				break;
		    }
		    else
		    {
		    	printf("%s",st2);
		    	break;
			}
			i++;
	    }
	    else
	    {
	    	printf("%s",st1);
		}
	}			
}

