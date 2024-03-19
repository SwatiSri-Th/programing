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
 	struct node *temp,start; 
	 ;
 	temp=(struct node *)malloc(sizeof(struct node));
 	temp= data =6;
 	temp->link=start;
 	start=temp;
 	//return start;
 }
