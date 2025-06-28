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

struct node *search(struct node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}
int main()
{
    struct node *root = createnode(6);
    struct node *r1 = createnode(8);
    struct node *r2 = createnode(5);
    struct node *r3 = createnode(7);
    struct node *r4 = createnode(9);

    root->right = r1;
    root->left = r2;
    r1->left = r3;
    r1->right = r4;

    /*
        Tree look likes

               5
             /   \
            /     \
           4       7
          / \     / \
         3   6   6   9

                          */
    printf("%d", search(root, 1)->data);

    return 0;
}
