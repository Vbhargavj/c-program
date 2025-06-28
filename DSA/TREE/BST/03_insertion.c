#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left, *right;
    int data;
};

struct node *create_node(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->left = temp->right = NULL;
    temp->data = val;
    return temp;
}

// struct node *insert(struct node *root, int val)
// {
//     if (root->left == NULL || root->right == NULL)
//     {
//         if (root->data > val)
//         {
//             struct node *temp = create_node(val);
//             root->left = temp;
//         }
//         else
//         {
//             struct node *temp = create_node(val);
//             root->right = temp;
//         }
//     }
//     else if (root->data == val)
//     {
//         // printf("Data already inserted\n");
//         return root;
//     }

//    else if (root->data > val)
//     {
//         // printf("I am less than\n");
//         insert(root->right, val);
//     }
//     else if (root->data < val)
//     {
//         // printf("I am  greater than\n");
//         insert(root->left, val);
//     }
// }

struct node *insert(struct node *root, int val)
{
    if (root == NULL)
    {
        struct node *temp = create_node(val);
        return temp;
    }

    else if (root->data == val)
    {
        printf("Data already inserted\n");
        return root;
    }

    else if (root->data > val)
    {
        printf("I am less than\n");
        root->right = insert(root->right, val);
    }k

    else if (root->data < val)
    {
        printf("I am  greater than\n");
        root->left = insert(root->left, val);
    }
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

int main()
{
    int val;
    struct node *root = create_node(10);
    printf("Enter the value to insert\n");
    scanf("%d", &val);
    insert(root, val);
    printf("Enter the value to insert\n");
    scanf("%d", &val);
    insert(root, val);
    printf("Enter the value to insert\n");
    scanf("%d", &val);
    insert(root, val);
    InOrder(root);

    return 0;
}