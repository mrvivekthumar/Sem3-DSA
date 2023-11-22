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
    doubly* head;
public:
    imp()
    {
        head = NULL;
    }
    doubly* inserAtTheEnd(int data)
    {
        doubly* nn = new doubly(data);
        if (head == NULL)
        {
            head = nn;
            return head;
        }
        doubly* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = nn;
        nn->prev = temp;
        return head;
    }
    void deleteAfter(int data)
    {
        doubly* temp = head;
        while (temp->data != data)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
    };
    void display(doubly* start)
    {
        doubly* temp = start;
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
    doubly* start = p1.inserAtTheEnd(1);
    p1.inserAtTheEnd(2);
    p1.inserAtTheEnd(3);
    p1.inserAtTheEnd(9);
    p1.inserAtTheEnd(10);
    p1.deleteAfter(2);
    p1.deleteAfter(2);

    p1.display(start);
    return 0;
}