#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
int main()
{
	int n,data[50],i;
	struct node *temp=NULL;
	printf("Number of list:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		printf("%d list:",i+1);
		scanf("%d",);
	}
	temp=(struct node *)malloc(sizeof(struct node));
	temp->info=data;
	temp->link = NULL;
	printf("%d",temp->data);
	return 0;
}
