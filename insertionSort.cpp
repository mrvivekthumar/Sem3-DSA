#include "bits/stdc++.h"
using namespace std;
int main()
{
    vector<int> v = {6, 3, 4, 0, 1};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int curr = v[i];
        while (j >= 0 && v[j] > curr)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = curr;
    }
    for (auto x : v)
        cout << x << " ";
    cout << '\n';
}