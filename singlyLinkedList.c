#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* insertAtBegining(struct node* head,int data)
{
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    if(head==NULL)
    {
        head = ptr;
        return head;
        // return ptr;
    }

    ptr->next = head;
    head = ptr;

    return head;
}

struct node* insertAtEnd(struct node* head,int data)
{
    struct node* ptr = (struct node*) malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    if(head==NULL)
    {
        // return insertAtBegining(head,data);
        return ptr;
    }
    struct node* iter = head;
    while(iter->next!=NULL)
    {
        iter = iter->next;
    }
    iter->next = ptr;
    return head;
}

// Print the list
void printList(struct node* head)
{
    struct node* temp = head;
    printf("Linked List: ");
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function to test
int main()
{
    struct node* head = NULL;

    // Inserting at beginning
    head = insertAtBegining(head, 30);
    head = insertAtBegining(head, 20);
    head = insertAtBegining(head, 10);

    // Inserting at end
    head = insertAtEnd(head, 40);
    head = insertAtEnd(head, 50);

    // Print the final list
    printList(head);

    return 0;
}