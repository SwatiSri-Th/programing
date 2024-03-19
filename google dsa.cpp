int insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->info = data;
 
    // Pointer of temp will be
    // assigned to start
    temp->link = start;
    start = temp;
}
