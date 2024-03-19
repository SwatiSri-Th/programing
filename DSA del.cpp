#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
};
struct node*start;
struct node *del(struct node *start,int data);
void create(int);
int main()
{
	int data;
	create(n);
	printf("Enter the data you want to delete:");
	scanf("%d",&data);
	del(start,data);
}
struct node *del(struct node *start,int data)
	{
		struct node *temp , *p;
		if (start == NULL)
		{
			printf("List is Empty \n");
			return start;
		}	
		if(start->info==data)
		{
			temp = start;
			start = start -> link;
			free(temp);
		}
		p=start;
		while(p ->link->info==data)
		{
			if (p->link->info==data)
			{
				temp=p->link;
				p->link=temp->link;
				free(temp);
				return start;
			}
				p=p->link;
		}
		printf("Element %d is not found in the list.\n");
		return start;
	}
void create(int n)
{
	 
