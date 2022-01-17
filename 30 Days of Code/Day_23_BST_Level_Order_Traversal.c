/* Task
A level-order traversal, also known as a breadth-first search, visits each level of a trees nodes from left to right, top to bottom. You are given a pointer, root, pointing to the root of a binary search tree. Complete the levelOrder function provided in your editor so that it prints the level-order traversal of the binary search tree.

Hint: You will find a queue helpful in completing this challenge.

Function Description
Complete the levelOrder function in the editor below.
levelOrder has the following parameter:
- Node pointer root: a reference to the root of the tree

Prints
- Print node.data items as space-separated line of integers. No return value is expected.

Input Format
The locked stub code in your editor reads the following inputs and assembles them into a BST:
The first line contains an integer, T (the number of test cases).
The T subsequent lines each contain an integer, data, denoting the value of an element that must be added to the BST.

Output Format
Print the data value of each node in the trees level-order traversal as a single line of N space-separated integers.  */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
} Node;
Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->left = node->right = NULL;
    node->data = data;
    return node;
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if (leftHeight > rightHeight)
            return (leftHeight + 1);
        else
            return (rightHeight + 1);
    }
}

void printEachLevel(Node *root, int level)
{
    if (root == NULL)
        return;
    if (level == 0)
        printf("%d ", root->data);
    else
    {
        printEachLevel(root->left, level - 1);
        printEachLevel(root->right, level - 1);
    }
}
void levelOrder(Node *root)
{
    // Write your code here
    int h = height(root);

    for (int i = 0; i < h; i++)
    {
        printEachLevel(root, i);
    }
}

Node *insert(Node *root, int data)
{
    if (root == NULL)
        return newNode(data);
    else
    {
        Node *cur;
        if (data <= root->data)
        {
            cur = insert(root->left, data);
            root->left = cur;
        }
        else
        {
            cur = insert(root->right, data);
            root->right = cur;
        }
    }
    return root;
}
int main()
{
    Node *root = NULL;
    int T, data;
    scanf("%d", &T);
    while (T-- > 0)
    {
        scanf("%d", &data);
        root = insert(root, data);
    }
    levelOrder(root);
    return 0;
}