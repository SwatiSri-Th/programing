#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   	int data;
   	struct node *link;
 };
 struct node *addatbeg(struct node *start,int data);
 int main()
 {
    struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp -> info = data;
	p=start;
	while (p->data link!=NULL)
	{
		p=p->link;
	}
	p->link =NULL;
	return start;
 }
