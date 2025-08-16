#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

void insertionAtBegin(struct Node **head, int new_data)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = new_data;

    new->next = *head;
    new->prev = NULL;
    if (*head != NULL)
        (*head)->prev = new;
    *head = new;
}

void insertionAtEnd(struct Node **head, int new_data)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = new_data;
    new->next = NULL;

    struct Node *temp = *head;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new;
    new->prev = temp;
}

void insertionAfternode(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = new_data;
    new->next = prev_node->next;
    prev_node->next = new;
    new->prev = prev_node;

    if (new->next != NULL)
        new->next->prev = new;
}

void deletionNode(struct Node** head, struct Node* node_delete)
{
    if(*head == NULL || node_delete == NULL)
        return;
    if(*head == node_delete)
        *head = node_delete->next;
        if(node_delete->next != NULL)
            node_delete->next->prev = node_delete->prev;
            if(node_delete->prev != NULL)
                node_delete->prev->next = node_delete->next;
        free(node_delete);

}

//traversal of elements
void display(struct Node *node)
{
    struct Node *last;
    while (node != NULL)
    {
        printf("%4d", node->data);
        last = node;
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL;
    insertionAtEnd(&head, 4);
    insertionAtBegin(&head, 2);
    insertionAtBegin(&head, 1);
    insertionAtEnd(&head, 5);
    insertionAfternode(head->next, 3);

    printf("Linked list: ");
    display(head);
    printf("\nAfter deleting an element: ");
    deletionNode(&head, head->next->next->next->next);
    display(head);
}