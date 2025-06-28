#include <stdio.h>
#include <conio.h>
int left = -1, right = -1;
int deque[10];

void insert_right(void);
void insert_left(void);
void delete_right(void);
void delete_left(void);
void display(void);

int main()
{
    int choice;
    do
    {
        printf("\n1.Insert at right ");
        printf("\n2.Insert at left ");
        printf("\n3.Delete from right ");
        printf("\n4.Delete from left ");
        printf("\n5.Display ");
        printf("\n6.Exit");
        printf("\n\nEnter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_right();
            break;
        case 2:
            insert_left();
            break;
        case 3:
            delete_right();
            break;
        case 4:
            delete_left();
            break;
        case 5:
            display();
            break;
        }
    } while (choice != 6);
    return 0;
}

//-------INSERT AT RIGHT-------
void insert_right()
{
    int val;
    printf("\nEnter the value to be added ");
    scanf("%d", &val);
    if ((left == 0 && right == 10 - 1) || (left == right + 1))
    {
        printf("\nOVERFLOW");
    }
    if (left == -1) // if queue is initially empty
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (right == 10 - 1)
            right = 0;
        else
            right = right + 1;
    }
    deque[right] = val;
}
//INSERT AT LEFT
void insert_left()
{
    int val;
    printf("\nEnter the value to be added ");
    scanf("%d", &val);
    if ((left == 0 && right == 10 - 1) || (left == right + 1))
    {
        printf("\nOVERFLOW");
    }
    if (left == -1) // if queue is initially empty
    {
        left = 0;
        right = 0;
    }
    else
    {
        if (left == 0)
            left = 10 - 1;
        else
            left = left - 1;
    }
    deque[left] = val;
}
//-------DELETE FROM RIGHT-------
void delete_right()
{
    if (left == -1)
    {
        printf("\nUNDERFLOW");
        return;
    }
    printf("\nThe deleted element is %d\n", deque[right]);
    if (left == right) // Queue has only one element
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (right == 0)
            right = 10 - 1;
        else
            right = right - 1;
    }
}

//-------DELETE FROM LEFT-------
void delete_left()
{
    if (left == -1)
    {
        printf("\nUNDERFLOW");
        return;
    }
    printf("\nThe deleted element is %d\n", deque[left]);
    if (left == right) // Queue has only one element
    {
        left = -1;
        right = -1;
    }
    else
    {
        if (left == 10 - 1)
            left = 0;
        else
            left = left + 1;
    }
}
//-------DISPLAY-------
void display()
{
    int front = left, rear = right;
    if (front == -1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    printf("\nThe elements in the queue are: ");
    if (front <= rear)
    {
        while (front <= rear)
        {
            printf("%d\t", deque[front]);
            front++;
        }
    }
    else
    {
        while (front <= 10 - 1)
        {
            printf("%d\t", deque[front]);
            front++;
        }
        front = 0;
        while (front <= rear)
        {
            printf("%d\t", deque[front]);
            front++;
        }
    }
    printf("\n");
}