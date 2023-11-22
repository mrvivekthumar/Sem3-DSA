#include<stdio.h>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int d)
    {
        data = d; next = nullptr;
    }
};

class imple
{
    node* front;
    node* rear;
public:
    imple()
    {
        front = rear = nullptr;
    }

    void insertq(int data)
    {
        node* nn = new node(data);
        if (rear == nullptr) {
            front = rear = nn;
        }
        rear->next = nn;
    }

    int deleteq()
    {

        if (front == nullptr) return 0;

        int val = front->data;
        node* temp = front;
        front = front->next;
        delete(temp);
        return val;
    }
};
int main() {
    imple i1;
    i1.insertq(1);
    i1.insertq(2);
    i1.insertq(3);
    int ans = i1.deleteq();
}