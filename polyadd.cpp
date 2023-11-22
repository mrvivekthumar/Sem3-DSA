
// Lakhani Dinky A.
// IT052 Sem-4
// Batch :- H3

// Polynomial Addition using Linkedlist
#include <iostream>
using namespace std;
#include <string>
struct polynomial
{
    int coef;
    int exp;
    polynomial* next;
};

class impl
{
private:
    polynomial* first;
public:
    impl()
    {
        first = '\0';
    }
    void addafter(int d, int l) {
        polynomial* nn = new polynomial();
        nn->coef = d;
        nn->exp = l;

        if (first == '\0')
        {
            first = nn;
            first->next = '\0';
        }
        else
        { // Modified
            polynomial* temp = first;
            while (temp->next != '\0')
            {
                temp = temp->next;
            }
            temp->next = nn;
            nn->next = '\0';
        }
    }
    void disp() {
        polynomial* temp = first;
        while (temp != '\0')
        {
            cout << temp->coef << "x^" << temp->exp << ' ';
            temp = temp->next;
        }
    }
    polynomial* return_first()
    {
        return first;
    }
    void addition(polynomial* p, polynomial* q) {
        polynomial* first = p;
        polynomial* second = q;
        impl third;

        while (first != '\0' && second != '\0')
        {
            if (first->exp == second->exp)
            {
                third.addafter(first->coef + second->coef, first->exp);
                first = first->next;
                second = second->next;
            }
            else if (first->exp > second->exp)
            {
                third.addafter(first->coef, first->exp);
                first = first->next;
            }
            else // if(first->exp < second->exp)
            {
                third.addafter(second->coef, second->exp);
                second = second->next;
            }
        }
        if (first != '\0')
        {
            while (first != '\0')
            {
                third.addafter(first->coef, first->exp);
                first = first->next;
            }
        }
        if (second != '\0')
        {
            while (second != '\0')
            {
                third.addafter(second->coef, second->exp);
                second = second->next;
            }
        }
        cout << "\nResultant Polynomial" << endl;
        third.disp();
    }
};
int main()
{
    impl a;
    a.addafter(5, 2);
    a.addafter(3, 1);
    a.addafter(5, 0);

    cout << "\nPOLYNOMAIL A" << endl;
    a.disp();
    cout << endl;

    impl b;
    b.addafter(5, 3);
    b.addafter(1, 2);
    b.addafter(3, 1);
    cout << "\nPOLYNOMIAL B" << endl;;
    b.disp();
    cout << endl;

    polynomial* f = a.return_first();
    polynomial* h = b.return_first();

    impl k;
    k.addition(f, h);
}

// Output
/*
POLYNOMAIL A
------------------
5x^2 3x^1 5x^0
POLYNOMIAL B
------------------
5x^3 1x^2 3x^1
POLYNOMIAL c
------------------
5x^3 6x^2 6x^1 5x^0
POLYNOMIAL ADDITION RESULT
------------------
*/
// Polynomial_add_using_linkedlist.cpp
// Displaying Polynomial_add_using_linkedlist.cpp.