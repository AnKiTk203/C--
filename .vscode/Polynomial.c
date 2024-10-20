#include <stdio.h>
#include <stdlib.h>

typedef struct Node{

    int data;
    int exp;
    struct Node* next;
}Node;

Node* head3 = NULL;

Node* newNodeFilled (int data, int exp)
{
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = data;
    p->exp = exp;
    p->next = NULL;
    return p;
}
void insert(Node** head, int data, int exp)
{
    Node* p = newNodeFilled(data,exp);
    if((*head) == NULL)
    {
        (*head) = p;
        p->next = NULL;
        return;
    }
        p->next = (*head);
       (*head) = p;
}

Node* addition(Node* head1, Node* head2)
{   
    while(head2 != NULL && head1 != NULL)
    {
        if(head1->exp == head2->exp)
        {
            
            insert(&head3, head1->data + head2->data, head1->exp);
            head1 = head1->next;
            head2 = head2->next; 
        }
        else if(head1->exp > head2->exp)
        {
            insert(&head3, head1->data, head1->exp);
            head1 = head1->next;
        }
        else
        {
           insert(&head3, head2->data, head2->exp);
            head2 = head2->next;
        }

    }
    return head3;
}

void display (Node** head)
{
    Node* ptr = *head;
    while(ptr->next!=NULL)
    {
        printf("%dx^%d + ",ptr->data,ptr->exp);
        ptr=ptr->next;
    }
    printf("%dx^%d\n",ptr->data,ptr->exp);
    ptr = ptr->next;
    free(ptr);
}

int main ()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    int i,p1,p2;
    
    printf("Enter degree of Polynomial: \n");

    scanf("%d",&p1);


    for(i=0;i<=p1;i++)
    {
        int n;
        printf("Enter Coeff of x^%d: ",i);
        scanf("%d",&n);
        insert(&head1, n,i);
    }
    
    printf("Enter degree of Polynomial: \n");
   
    scanf("%d",&p2);

    for(i=0;i<=p2;i++)
    {
        int n;
        printf("Enter Coeff of x^%d: ",i);
        scanf("%d",&n);
        insert(&head2, n, i);
    }

    display (&head1);
    
    display (&head2);
    
    addition (head1,head2);

    display(&head3);
}








