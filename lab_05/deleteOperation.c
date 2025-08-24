#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertToEmptyList(struct Node *head, int data)
{
    if (head != NULL)
        return head;

    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = data;
    head = new;
    head->next = head;

    return head;
}

struct Node *insertAtBegin(struct Node *head, int data)
{
    if (head == NULL)
        return insertToEmptyList(head, data);

    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = data;
    new->next = head->next;
    head->next = new;

    return head;
}

struct Node *insertAtEnd(struct Node *last, int data)
{
    if (last == NULL)
        return insertToEmptyList(last, data);

    struct Node *new = (struct Node *)malloc(sizeof(struct Node));

    new->data = data;
    new->next = last->next;
    last->next = new;
    last = new;

    return last;
}

struct Node *insertionAfterNode(struct Node *last, int data, int ele)
{
    if (last == NULL)
        return NULL;

    struct Node *new, *ptr;

    ptr = last->next;
    do
    {
        if (ptr->data == ele)
        {
            new = (struct Node *)malloc(sizeof(struct Node));
            new->data = data;
            new->next = ptr->next;
            ptr->next = new;

            if (ptr == last)
            {
                last = new;
            }
            return last;
        }
        ptr = ptr->next;
    } while (ptr != last->next);

    printf("\nThe given node is not present in the list");
    return last;
}

void deleteNode(struct Node** last, int key_node)
{
    if(last==NULL)
    return;

    if((*last)->data == key_node && (*last)->next==*last)
    {
        free(*last);
        *last=NULL;
        return;
    }

    struct Node *temp = *last, *dele_node;

    if((*last)->data==key_node)
    {
        while(temp->next!=*last)
        {
            temp = temp->next;
        }

        temp->next=(*last)->next;
        free(*last);
        *last = temp->next;
    }

    while(temp->next!=*last && temp->next->data != key_node)
    {
        temp = temp->next;
    }

    if(temp->next->data==key_node)
    {
        dele_node=temp->next;
        temp->next=dele_node->next;
        free(dele_node);
    }
}

//performing traversal operation
void display(struct Node *head)
{
    struct Node *ptr;

    if (head == NULL)
    {
        printf("The list is empty");
        return;
    }

    ptr = head->next;

    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head->next);
}

int main()
{
    struct Node *head = NULL;

    head = insertToEmptyList(head, 20);
    head = insertAtEnd(head, 25);
    head = insertAtBegin(head, 10);
    head = insertionAfterNode(head, 15, 10);

    printf("Linked list elements: \n");
    display(head);

    printf("\nafter deletion, the linked list elements are: ");
    deleteNode(&head, 15);
    printf("\n");
    display(head);

    return 0;
}