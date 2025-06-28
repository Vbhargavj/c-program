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

// using recursion
struct node *deletion(struct node *root, int val)
{

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data > val)
    {
        root->left = deletion(root->left, val);
    }

    else if (root->data < val)
    {
        root->right = deletion(root->right, val);
    }
    else
    {
        // node have no child
        if (root->left == NULL && root->right == NULL)
        {
            struct node *temp = root;
            free(temp);
            return NULL;
        }

        // node have one child
        else if (root->left == NULL || root->right == NULL)
        {
            if (root->left == NULL)
            {
                struct node *temp = root;
                free(temp);
                return root->right;
            }
            else
            {
                struct node *temp = root;
                free(temp);
                return root->left;
            }
        }

        // node have two child
        else if (root->left != NULL && root->right != NULL)
        {
            // printf("\n%d\n", root->data);
            // struct node *tmp = root;
            // while (tmp->right != NULL)
            // {
            //     tmp = tmp->right;
            //     printf("\ntemp data %d\n", tmp->data);
            // }
            // printf("\ntemp data %d\n", tmp->data);
            // struct node *temp = tmp;
            // root->data = tmp->data;
            // printf("\n%d\n", root->data);

            // return deletion(root->right, tmp->data);
            struct node *temp = root->left;
            while (temp->right != NULL)
            {
                temp = temp->right;
            }
            root->data = temp->data;
            root->left = deletion(root->left, temp->data);
        }
        return root;
    }
    // return root;
}

struct node *insert(struct node *root, int val)
{
    if (root == NULL)
    {
        struct node *temp = createnode(val);
        return temp;
    }

    else if (root->data == val)
    {
        printf("Data already inserted\n");
        return root;
    }

    else if (root->data > val)
    {
        printf("I am  greater than\n");
        root->left = insert(root->left, val);
    }

    else if (root->data < val)
    {
        printf("I am less than\n");
        root->right = insert(root->right, val);
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
    // deletion(root, 6);
    insert(root, 12);
    printf("\n");
    InOrder(root);
    return 0;
}