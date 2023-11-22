#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define CAPACITY 5
int Queue[CAPACITY];
int rear = -1;
int front = -1;

bool isFull()
{
    if (rear == CAPACITY - 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void Enqueue(int ele)
{
    if (isFull())
    {
        rear++;
        Queue[rear] = ele;
        printf("execute succesfully\n\n");
    }
    else
    {
        printf("Stack is overflow\n\n");
        exit(0);
    }
}
bool isEmpty()
{
    if (rear == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int Dequeue()
{
    if (isEmpty())
    {
        front++;
        Queue[front] = 0;
        printf("Deleted\n\n");
    }
    else
    {
        printf("Stack is underflow\n\n");
        exit(0);
    }
}

int ch, item;
int main()
{
    while (1)
    {
        printf("1. For Queue\n");
        printf("2. For DeQueue\n");
        printf("3. For print the valuse\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element : ");
            scanf("%d", &item);
            Enqueue(item);
            break;
        case 2:
            Dequeue();
            break;

        case 3:
            for (int i = 0; i < CAPACITY; i++)
            {
                cout << Queue[i] << " ";
            }
            cout << endl;
            cout << endl;
            break;

        default:
            cout << "There is no option\n";
            break;
        }
    }
    return 0;
}