#include <stdio.h>
#include <stdlib.h>  //sice we use malloc or dynamic memory allocation

struct Node
{
    int data;
    struct Node* next;  //self referencing structure
};

//defining a structure for a node at the beginning of the linked list
struct Node* InsertAtBeginning(struct Node* head, int data) // head stores the address of the next node
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); //memory to store node
    newNode -> data = data;
    newNode -> next = head;
    return newNode;

}


//function to delete at any index

struct Node* deleteindex(struct Node* head, int index)
{
    struct Node* p = head;

    for(int i = 0; i < index-2; i++)
    {
        p = p -> next;
    }
    printf("%d",p->data);
    struct Node* q = p->next;
    p -> next = q -> next;
    q->next = NULL;
    free(q);
    return head;
}
 
//Function to display the linked list
void displayLL(struct Node* head)
{
    struct Node* p = head; 
    while(p!=NULL)
    {
        printf("%d -> ", p -> data);
        p = p -> next;
    }

    printf("NULL\n\n");
} 

int main()
{
    int n, data, index;
    struct Node* head = NULL; // initialization of LL
    printf("Enter the number of nodes: ");
    scanf("%d", &n); 

    //insert nodes at the beginning
    for(int i=0; i<n; i++)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        printf("\n");
        head=InsertAtBeginning(head, data);
    }

    //display the LL
    printf("Linked List: \n\n");
    displayLL(head);

    //delete
    printf("Enter an element's position to delete: ");

    scanf("%d", &index);
    deleteindex(head, index);
    printf("\nNew linked list after deletion: \n");
    displayLL(head);

    return 0;

}