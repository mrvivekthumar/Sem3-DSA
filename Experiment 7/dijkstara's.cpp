// it is not working

#include <bits/stdc++.h>
using namespace std;
class dJ
{
public:
    int a[10][10];
    dJ()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                a[i][j] = 0;
            }
        }
    }
    void dijikstra(int V)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                for (int k = 0; k < V; k++)
                {
                    if (a[i][j] > a[i][k] + a[k][j])
                    {
                        a[i][j] = a[i][k] + a[k][j];
                    }
                }
            }
        }
    }
    void add_edge(int u, int v, int w)
    {
        a[u][v] = w;
    }
    void display(int V)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
                cout << a[i][j] << " ";
            cout << "\n";
        }
    }
};
int main()
{
    dJ d;
    int V = 3;
    d.add_edge(0, 1, 4);
    d.add_edge(0, 2, 11);
    d.add_edge(1, 0, 6);
    d.add_edge(1, 2, 2);
    d.add_edge(2, 0, 3);
    d.add_edge(2, 1, 400);
    cout << "Before Replacing values \n\n";
    d.display(V);
    d.dijikstra(V);
    cout << "\n\n After applying Dijikstra's Algorithm \n\n";
    d.display(V);
    return 0;
}