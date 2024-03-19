#include<stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *insertbeg(struct node *start);
struct node *insertafternode(struct node *start);
struct node *insertbeforenode(struct node *start);
struct node *insertend(struct node *start);
struct node *insertatpos(struct node *start);
int main()
{
struct node *head, *ptr, *temp;
head = 0;
int n, i;
printf("\nEnter the number of nodes: ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
ptr = (struct node *)malloc(sizeof(struct node));
printf("Enter the data of node%d:", i + 1);
scanf("%d", &ptr->data);
ptr->link = NULL;
if (head == NULL)
{
head = temp = ptr;
}
else
temp->link = ptr;
temp = ptr;
}
ptr = head;
printf("\n(a) CREATION OF LINK LIST: ");
printf("\nThe list is :\n");
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n\n(b) INSERTION AT THE BEGINNING OF THE LIST: ");
head = insertbeg(head);
ptr = head;
printf("The list after the insertion at the begining is:\n");
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n\n(c) INSERTION AFTER A NODE: ");
head = insertafternode(head);
ptr = head;
printf("The list after inserting between the nodes is:\n");
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n\n(d) INSERTION BEFORE A NODE: ");
head = insertbeforenode(head);
ptr=head;
printf("The list after inserting before a node is:\n");
while(ptr != NULL)
{
printf("%d ",ptr->data);
ptr=ptr->link;
}
printf("\n\n(e) INSERTION AT THE END OF THE LIST: ");
head = insertend(head);
ptr = head;
printf("The list after the insertion at the end is:\n");
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n\n(f) INSERTION AT A GIVEN POSITION: ");
head = insertatpos(head);
ptr=head;
printf("The list after the insertion at a given position is:\n");
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
}
struct node *insertbeg(struct node *start)
{
struct node *temp;
temp = (struct node *)malloc(sizeof(struct node));
printf("\nEnter the data of the node to added at the begginning: ");
scanf("%d", &temp->data);
temp->link = start;
start = temp;
return start;
}
struct node *insertafternode(struct node *start)
{
struct node *p, *temp;
p = start;
temp = (struct node *)malloc(sizeof(struct node));
int s;
printf("\nEnter the data of the previous node: ");
scanf("%d", &s);
printf("Enter the data of the node to be inserted: \n");
scanf("%d", &temp->data);
while (p->link != NULL)
{
if (p->data == s)
{
temp->link = p->link;
p->link = temp;
}
p = p->link;
}
return start;
}
struct node *insertbeforenode(struct node *start)
{
struct node *p,*temp,*pre;
p=start;
int data;
temp=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data of the node to be inserted: ");
scanf("%d",&temp->data);
printf("Enter the data of the node which is after the insertion node: ");
scanf("%d",&data);
while(p->data != data)
{
pre=p;
p=p->link;
}
temp->link=pre->link;
pre->link=temp;
return start;
}
struct node *insertend(struct node *start)
{
struct node *p, *temp;
p = start;
temp = (struct node *)malloc(sizeof(struct node));
printf("\nEnter the data of the node to be inserted: ");
scanf("%d", &temp->data);
while (p->link != NULL)
{
p = p->link;
}
p->link = temp;
temp->link = NULL;
return start;
}
struct node *insertatpos(struct node *start)
{
int pos,node=1;
struct node *p,*temp;
temp = (struct node *)malloc(sizeof(struct node));
printf("\nEnter the data of the node to be inserted: ");
scanf("%d", &temp->data);
printf("Enter the position of the node to be insertes: ");
scanf("%d",&pos);
p=start;
while(node!=pos-1)
{
p=p->link;
node++;
}
temp->link=p->link;
p->link=temp;
return start;
}
