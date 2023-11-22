#include <iostream>
using namespace std;

class heapSort
{
public:
    int a[50];
    int n;
    heapSort()
    {
        a[0] = -1;
        n = 0;
    }
    void insert(int val)
    {
        n = n + 1;
        int i = n;
        a[i] = val;
        while (i > 1)
        {
            int parent = i / 2;
            if (a[parent] < a[i])
            {
                swap(a[parent], a[i]);
                i = parent;
            }
            else
            {
                return;
            }
        }
    }
    void delet()
    {
        if (n == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }
        a[1] = a[n];
        n--;

        int i = 1;
        while (i < n)
        {
            int left = 2 * i;
            int right = 2 * i + 1;
            if (left < n && a[i] < a[left])
            {
                swap(a[i], a[left]);
                i = left;
            }
            else if (right < n && a[i] < a[right])
            {
                swap(a[i], a[right]);
                i = right;
            }
            else
            {
                return;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && a[largest] < a[left])
    {
        largest = left;
    }
    if (right < n && a[largest] < a[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }
}
int main()
{
    heapSort h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.delet();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "printing the array now " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}