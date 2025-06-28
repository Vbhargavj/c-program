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

int cleft(struct node *root)
{
    if (root->left != NULL)
    {
        if (root->data < root->left->data)
        {
            return 0;
        }
        return 1;
    }
}

int cright(struct node *root)
{
    if (root->right != NULL)
    {
        if (root->data > root->right->data)
        {
            return 0;
        }
        return 1;
    }
}

struct node *traversal(struct node *root)
{
    while (root != NULL)
    {
        printf("%d\n", root->data);

        if (root->left != NULL)
        {
            printf("%d\n",cleft(root));
            traversal(root->left);
        }
        else if (root->right != NULL)
        {
            printf("%d",cright(root));
            traversal(root->right);
        }
        else
        {
            return NULL;
        }
    }
}

int main()
{
    struct node *root = createnode(6);
    struct node *r1 = createnode(4);
    struct node *r2 = createnode(8);
    struct node *r3 = createnode(3);
    struct node *r4 = createnode(6);
    struct node *r5 = createnode(7);
    struct node *r6 = createnode(9);

    root->right = r1;
    root->left = r2;
    r1->left = r3;
    r1->right = r4;
    r2->left = r5;
    r2->right = r6;
    /*
    ree look likes
        5
      /   \
     /     \
    4       7
   / \     / \
  3   6   6   9
    */

    traversal(root);

    return 0;
}