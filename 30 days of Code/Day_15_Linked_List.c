// Task
// Complete the insert function in your editor so that it creates a new Node (pass data as the Node constructor argument) and inserts it at the tail of the linked list referenced by the head parameter. Once the new node is added, return the reference to the head node.

// Input Format
// The first line contains T, the number of elements to insert.
// Each of the next T lines contains an integer to insert at the end of the list.

// Output Format
// Return a reference to the head node of the linked list.

#include <stdlib.h>
#include <stdio.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *insert(Node *head, int data)
{
    //Complete this function
    Node *ptr, *temp = head;
    ptr = (struct Node *)malloc(sizeof(struct Node)); //allocate memory
    ptr->data = data;                                 //initialise value
    ptr->next = NULL;

    if (temp == NULL)
    {
        head = ptr;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    return head;
}

void display(Node *head)
{
    Node *start = head;
    while (start)
    {
        printf("%d ", start->data);
        start = start->next;
    }
}
int main()
{
    int T, data;
    scanf("%d", &T);
    Node *head = NULL;
    while (T-- > 0)
    {
        scanf("%d", &data);
        head = insert(head, data);
    }
    display(head);
}
