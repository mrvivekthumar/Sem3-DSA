#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int size;
    int rear, front;

public:
    queue(int n)
    {
        size = n;
        arr = new int[n];
        rear = front = -1;
    }
    void enqueqe(int d)
    {
        if (front == -1)
        {
            front = rear = 0;
            arr[rear] = d;
        }
        else if (((rear + 1) % size) == front || front == 0 && rear == size - 1)
        {
            cout << "the queqe is full" << endl;
            return;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = d;
        }
        else
        {
            rear++;
            arr[rear] = d;
        }
    }
    int dequeue()
    {
        if (front == -1)
        {
            cout << "the queqe is empty" << endl;
            return 0;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    void print()
    {
        if (front == -1)
        {
            cout << "the queue is empty" << endl;
            return;
        }
        cout << "Elements in circular Queue are : ";
        if (rear >= front)
        {
            for (int i = front; i <= rear; ++i)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            for (int i = front; i < size; ++i)
            {
                cout << arr[i] << " ";
            }
            for (int i = 0; i <= rear; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    queue q1(5);
    q1.enqueqe(15);
    q1.enqueqe(43);
    q1.enqueqe(10);
    q1.print();
    cout << endl;
    cout << q1.dequeue() << endl;

    q1.print();
}