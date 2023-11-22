#include <bits/stdc++.h>
using namespace std;
class doubly
{
public:
    doubly* prev;
    int data;
    doubly* next;
    doubly(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
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
    void inserbefore(int data, int val)
    {
        doubly* nn = new doubly(val);
        doubly* temp = head;
        while (temp->data != data)
        {
            temp = temp->next;
        }
        //logic no = 1 
        nn->prev = temp->prev;
        nn->next = temp;
        temp->prev->next = nn;
        temp->prev = nn;

        // logic no = 2
        // nn->prev = temp->prev->next;
        // temp->prev->next = nn;
        // nn->next = temp;
        // temp->prev = nn;
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
    p1.inserAtTheEnd(4);
    p1.inserAtTheEnd(5);
    p1.inserbefore(4, 121);
    p1.inserbefore(3, 61);
    p1.inserbefore(3, 51);

    p1.display(start);
    return 0;
}