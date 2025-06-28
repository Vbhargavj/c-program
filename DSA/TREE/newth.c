#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *left;
    struct node *right;
    bool rightThread;
};
struct node *leftMost(struct node *n)
{
    if (n == NULL)
        return NULL;

    while (n->left != NULL)
        n = n->left;

    return n;
}

// C code to do inorder traversal in a threaded binary tree
void inOrder(struct node *root)
{
    struct node *cur = leftMost(root);
    while (cur != NULL)
    {
        printf("%d ", cur->data);

        // If this node is a thread node, then go to
        // inorder successor
        if (cur->rightThread)
            cur = cur->right;
        else // Else go to the leftmost child in right
            // subtree
            cur = leftmost(cur->right);
    }
}

int main()
{

    // Utility function to find leftmost node in a tree rooted
    // with n

    return 0;
}
