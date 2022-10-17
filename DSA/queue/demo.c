#include <stdio.h>
int IsFull(int rear)
{
    if (rear == 15 - 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    // (rear == -1) ?
}
int IsEmpty(int front)
{
    if (front == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    // front==0 ? return 0 : return 1;
}
void insert(int *rear, int *front ,int arr[],int n)
{
    if (IsFull(&rear))
    {
        printf("\nQueue is full can't enter the value\n");
    }
    else if (rear == -1)
    {
        rear = front = 0;
        arr[front]=n;
    }
}
int main()
{
    int queue[15];
    int front = -1, rear = -1;

    return 0;
}