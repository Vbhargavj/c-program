#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    int rt;
    struct node *right;
};

struct node *createnode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->rt=-1;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

struct node *pfinder(struct node *root){
    
}
struct node *linker(struct node *root){

}
int main()
{
    // Here create node
    struct node *root = createnode(24);
    struct node *r1 = createnode(10);
    struct node *r2 = createnode(45);
    struct node *r3 = createnode(5);
    struct node *r4 = createnode(16);
    struct node *r5 = createnode(34);
    struct node *r6 = createnode(56);
    struct node *r7 = createnode(12);
    struct node *r8 = createnode(20);

    // here link this nodes
    root->left = r1;
    root->right = r2;
    r1->left = r3;
    r1->right = r4;
    r2->left = r5;
    r2->right = r6;
    r4->left = r7;
    r4->right = r8;
    r3->rt = r5->rt = r6->rt = r7->rt = r8->rt = 1;
    root->rt = r1->rt =r2->rt =r4->rt = 0;

    // Look this BST tree
    /*
                    24
                 /     \
                10      45
               / \     /  \
              5   16  34   56
                 /  \
                12   20
    */
    


   


    return 0;
}