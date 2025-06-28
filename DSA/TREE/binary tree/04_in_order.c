// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     int data;
//     struct node *right;
//     struct node *left;
// };

// struct node *createnode(int val)
// {
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = val;
//     temp->right = NULL;
//     temp->left = NULL;
//     return temp;
// }

// int main()
// {
//     struct node *root = createnode(7);
//     struct node *r1 = createnode(3);
//     struct node *r2 = createnode(5);
//     struct node *r3 = createnode(8);
//     root->left = r1;
//     root->right = r2;
//     struct node *roo2 = root;
//     r1->left = r3;
//     while (root != NULL)
//     {
//         printf("%d", root->data);
//         root = root->left;
//     }
//     root = roo2;
//     while (root != NULL)
//     {
//         root = root->right;
//         printf("%d", root->data);
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

/*
here tree is
        7
       / \
      3   5
     / \
    8   11
*/
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

void InOrder(struct node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}
void PostOrder(struct node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d ", root->data);
    }
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
int main()
{
    struct node *root = createnode(7);
    struct node *r1 = createnode(3);
    struct node *r2 = createnode(5);
    struct node *r3 = createnode(8);
    struct node *r4 = createnode(11);
    root->left = r1;
    root->right = r2;
    struct node *roo2 = root;
    r1->left = r3;
    r1->right = r4;

    InOrder(root);
    printf("\n");
    PostOrder(root);
    printf("\n");
    preorder(root);

    return 0;
}