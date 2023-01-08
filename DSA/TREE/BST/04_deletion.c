#include <stdio.h>
#include <stdlib.h>

// struct node
// {
//     struct node *left, *right;
//     int data;
// };

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left = temp->right = NULL;
    temp->data = val;
    return temp;
}

void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

struct node *deletion(struct node *root, int val)
{

    if (root == NULL)
    {
        return NULL;
    }

    else if (root->data == val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            struct node *temp = root;
            free(temp);
            return NULL;
        }
    }

    else if (root->data > val)
    {
        root->left = deletion(root->left, val);
    }

    else if (root->data < val)
    {
        root->right = deletion(root->right, val);
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

    InOrder(root);
    deletion(root, 7);
    printf("\n");
    InOrder(root);
    return 0;
}