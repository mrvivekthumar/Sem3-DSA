//Doubly Link List Insert At End

#include <bits/stdc++.h>
using namespace std;
class doubly
{
public:
    int data;
    doubly* prev;
    doubly* next;
    doubly(int d)
    {
        data = d;
        prev = next = NULL;
    }
};
class imp
{
public:
    doubly* head;
    imp()
    {
        head = NULL;
    }
    void inserAtTheEnd(int data)
    {
        doubly* nn = new doubly(data);

        if (head == NULL)
        {
            head = nn;
            return;
        }
        else
        {
            doubly* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            nn->prev = temp;
            temp->next = nn;
        }
    }
    void display()
    {
        doubly* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    imp p1;
    p1.inserAtTheEnd(1);
    p1.inserAtTheEnd(2);
    p1.inserAtTheEnd(3);
    p1.display();
    return 0;
}