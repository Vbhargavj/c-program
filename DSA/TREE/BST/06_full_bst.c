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
        printf("Found\n");
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
        // printf("I am less than\n");
        root->left = insert(root->left, val);
    }

    else if (root->data < val)
    {
        // printf("I am  greater than\n");
        root->right = insert(root->right, val);
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
}
int count = 0;

struct node *NumOfLNode(struct node *root)
{
    if (root == NULL)
    {
        return root;
    }
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

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
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
    struct node *root = createnode(6);
    struct node *r1 = createnode(8);
    struct node *r2 = createnode(5);
    struct node *r3 = createnode(7);
    struct node *r4 = createnode(9);

    root->right = r1;
    root->left = r2;
    r1->left = r3;
    r1->right = r4;
    int val, c;
    while (1)
    {
        printf("\nVADUKAR BHARGAV JENTIBHAI\n");
        printf("ENROLLMENT NUMBER:210210116054\n");
        printf("\nEnter the option to perform an operation\n");
        printf("\t1:  Insertion\n");
        printf("\t2:  Delete\n");
        printf("\t3:  Search\n");
        printf("\t4:  Number of total node\n");
        printf("\t5:  Number of internal node\n");
        printf("\t6:  Number of leaf node\n");
        printf("\t7:  In order\n");
        printf("\t8:  Pre order\n");
        printf("\t9:  Post order\n");
        printf("\t10: Exit\n\n\t");

        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("Enter the value to insert\n");
            scanf("%d", &val);
            insert(root, val);
            break;
        case 2:
            printf("Enter the number to delete\n");
            scanf("%d", &val);
            deletion(root, val);
            break;
        case 3:
            printf("Enter the value to search\n");
            scanf("%d", &val);
            search(root, val);
            break;
        case 4:
            printf("Total node in tree are %d\n", tNode(root));
            break;
        case 5:
            printf("Total internal node are %d\n", NumOfINode(root));
            break;
        case 6:
            count = 0;
            NumOfLNode(root);
            printf("Total leaf node are %d\n", count);
            break;
        case 7:
            InOrder(root);
            printf("\n");
            break;
        case 8:
            preorder(root);
            printf("\n");
            break;
        case 9:
            PostOrder(root);
            printf("\n");
            break;
        default:
            printf("Choose the proper option\n");
            break;
        }
    }
    return 0;
}