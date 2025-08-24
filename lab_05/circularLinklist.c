#include <stdio.h>
#include <stdlib.h>

void display();

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node* last;
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    first->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=first;

    last=fourth;

    display(last);

    return 0;
}

void display(struct Node* last_node)
{
    struct Node* ptr;

    if(last_node == NULL)
    {
        printf("The list is empty");
        return;
    }
    
    ptr=last_node->next;

    do
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    } while (ptr!=last_node->next);
}