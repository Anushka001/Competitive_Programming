/* Task
The height of a binary search tree is the number of edges between the trees root and its furthest leaf. You are given a pointer, root, pointing to the root of a binary search tree. Complete the getHeight function provided in your editor so that it returns the height of the binary search tree.

Input Format
The locked stub code in your editor reads the following inputs and assembles them into a binary search tree:
The first line contains an integer, n, denoting the number of nodes in the tree.
Each of the n subsequent lines contains an integer, data, denoting the value of an element that must be added to the BST.

Output Format
The locked stub code in your editor will print the integer returned by your getHeight function denoting the height of the BST.*/

#include <stdio.h>
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

int getHeight(Node *root)
{
    if (root == NULL)
        return -1;
    int lh = getHeight(root->left);
    int rh = getHeight(root->right);

    return lh > rh ? lh + 1 : rh + 1;
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
    int height = getHeight(root);
    printf("%d", height);
    return 0;
}