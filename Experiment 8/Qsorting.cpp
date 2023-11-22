#include "iostream"
using namespace std;
int part(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int i = lb, j = ub + 1;
    do
    {
        do
        {
            i++; // i==1
        } while (a[i] < pivot);
        do
        {
            j--;                // j== 9,
        } while (a[j] > pivot); // 7,55 ,43 ,21, 6,7 ,8,11 ,9,100
        if (i < j)
        {

            swap(a[i], a[j]);
        }
        if (i >= j)
        {
            return j;
        }
    } while (i < j);
}
void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = part(a, lb, ub);
        swap(a[lb], a[loc]);
        quickSort(a, lb, (loc - 1));
        quickSort(a, (loc + 1), ub);
    }
}
int main()
{
    int a[] = {7, 55, 43, 21, 6, 7, 8, 11, 9, 100};
    int lb = 0;
    int ub = 9;
    quickSort(a, lb, ub);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
};
