#include <stdio.h>
#include <stdlib.h>

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

// void InOrder(struct node *root)
// {
//     if (root != NULL)
//     {
//         InOrder(root->left);
//         printf("%d ", root->data);
//         InOrder(root->right);
//     }
// }

int count = 0;
struct node *NumOfLNode(struct node *root)
{
    if (root == NULL)
    {
        return root;
    }
    printf("%d\n", root->data);
    if (root->left == NULL && root->right == NULL)
    {
        count++;
    }
    NumOfLNode(root->left);
    NumOfLNode(root->right);
}

int tNode(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + tNode(root->left) + tNode(root->right);
}
int c = 0;

int NumOfINode(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left != NULL || root->right != NULL)
    {
        return 1 + NumOfINode(root->left) + NumOfINode(root->right);
    }

    else
    {
        return 0;
    }
}
/*
here tree is
        7
       / \
      3   5
     / \
    8   11
*/
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

    c = tNode(root);

    printf("\t\n%d\n", c);
    return 0;
}