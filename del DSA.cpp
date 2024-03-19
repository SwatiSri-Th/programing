#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *start,*temp;
    struct node *head=NULL;
    struct node *newnode;
    int n, i;
    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);
    for (i=0;i<n;i++)
{
    newnode= (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    if(head==NULL)
{
    head=start=newnode;
}
else
{
    start->next=newnode;
    start=newnode;
}
}
 printf("The creation of the list :");
    newnode=head;
     while(newnode!=NULL)
    {
        printf("%d ",newnode->data);
        newnode=newnode->next;
    }
    printf("\n Searching in a list :");
    struct node *search;
    search=head;
    int count=1,data1;
    printf("\nEnter the data:- ");
    scanf("%d",&data1);
    while(search->data!=data1)
    {
        search=search->next;
        count++;
    }
    printf("\nThe position of the list:- %d",count);
    printf("\n To delete from the 1st node of the list :");
    temp=head;
    head=head->next;
    free(temp);
    temp=head;
    while (temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    printf("\n To delete the end node of the list :");
    struct node *prevnode;
    temp=head;
    while(temp->next!=NULL)
    {
        prevnode=temp;
        temp=temp->next;
    }
    prevnode->next=NULL;
    temp=head;
    while (temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }  
    printf("\n To delete in between the node of the list :");
    int data2;
    printf("\n Enter the data from the list ");
    scanf("%d",&data2);
    temp=head;
    while(temp->data!=data2)
    {
        prevnode=temp;
        temp=temp->next;
    } 
    prevnode->next=temp->next;
    free(temp);
    temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }  
}
