#include <stdio.h>
#include <stdlib.h>
// in four method only one method are aeteched -delete firsts
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *first)
{ struct node *ptr=first;
//  printf("traversal: %d\n", ptr->data);
//         ptr = ptr->next;

//     while (ptr != first)
//     {
//         printf("traversal: %d\n", ptr->data);
//         ptr = ptr->next;

//     }
do{
 printf("traversal: %d\n", ptr->data);
 ptr = ptr->next;


}while(ptr!=first);
}


int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
     struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 2;
    first->next = second;

    second->data = 12;
    second->next = third;

    third->data = 22;
    third->next = fourth;

    fourth->data = 32;
    fourth->next = NULL;

    traversal(first);
    
    return 0;
}
