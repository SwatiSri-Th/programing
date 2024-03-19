//progtam to arrange name in alphabetically order.
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50][20],temp[20];
	int n,i,j;
	printf("\n How many names?");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%s",name[i]);
	//loop to arrange name in alphabetical order 
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	if(strcmp(names[i],names[j]>0))
	{
		strcpy(temp,names[i]);
		strcpy(names[i],names[j]);
		strcpy(name[j],temp);
	}
	//loop to print the alphabetical list of name
	printf("\n Names in alphabetical order :");
	for(i=0;i<n;i++)
	printf("\n %s",names[i]);
	return 0;
}
