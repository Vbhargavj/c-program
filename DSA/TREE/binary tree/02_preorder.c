#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *createnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
/*
here tree is
        4
       / \
      2   42
     / \
    5   6
*/
int main()
{
    struct node *p = createnode(20);
    struct node *p1 = createnode(10);
    struct node *p2 = createnode(42);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(11);

    // join node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preorder(p);

    return 0;
}