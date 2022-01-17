/* Task
A Node class is provided for you in the editor. A Node object has an integer data field, data, and a Node instance pointer, next, pointing to another node (i.e.: the next node in a list).

A removeDuplicates function is declared in your editor, which takes a pointer to the head node of a linked list as a parameter. Complete removeDuplicates so that it deletes any duplicate nodes from the list and returns the head of the updated list.

Note: The head pointer may be null, indicating that the list is empty. Be sure to reset your next pointer when performing deletions to avoid breaking the list.

Input Format
You do not need to read any input from stdin. The following input is handled by the locked stub code and passed to the removeDuplicates function:
The first line contains an integer, N, the number of nodes to be inserted.
The N subsequent lines each contain an integer describing the data value of a node being inserted at the lists tail.

Output Format
Your removeDuplicates function should return the head of the updated linked list. The locked stub code in your editor will print the returned list to stdout.   */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL)
        return head;

    Node *node = head;
    while (node->next != NULL)
    {
        if (node->data == node->next->data)
        {
            node->next = node->next->next;
        }
        else
        {
            node = node->next;
        }
    }
    return head;
}

Node *insert(Node *head, int data)
{
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else if (head->next == NULL)
    {
        head->next = p;
    }
    else
    {
        Node *start = head;
        while (start->next != NULL)
            start = start->next;

        start->next = p;
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
    head = removeDuplicates(head);
    display(head);
}
