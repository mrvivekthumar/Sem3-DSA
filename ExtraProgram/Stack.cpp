#include <iostream>
#include <stdio.h>
using namespace std;
#define CAPACITY 5
int stack[CAPACITY];
int top = -1;
bool isFull()
{
    if (top == CAPACITY - 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
void push(int ele)
{
    if (isFull())
    {
        top++;
        stack[top] = ele;
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
    if (top == -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int pop()
{
    if (isEmpty())
    {
        stack[top] = 0;
        top--;
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
        printf("1. For push\n");
        printf("2. For pop\n");
        printf("3. For print the valuse\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;

        case 3:
            for (int i = 0; i < CAPACITY; i++)
            {
                cout << stack[i] << " ";
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