#include <iostream>
using namespace std;
int merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int res[right - left + 1];
    while (i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            res[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            res[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        res[k] = arr[i];
        k++;
        i++;
    }

    while (j <= right)
    {
        res[k] = arr[j];
        k++;
        j++;
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = res[i - left];
    }
};
int mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
};
int main()
{
    int arr[] = {33, 56, 78, 4, 23, 11, 43};
    int left = 0;
    int right = 6;
    mergeSort(arr, left, right);
    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
};
