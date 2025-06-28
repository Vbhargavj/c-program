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

int main()
{
    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(3);

    p->right = p1;
    p->left = p2;

    return 0;
}