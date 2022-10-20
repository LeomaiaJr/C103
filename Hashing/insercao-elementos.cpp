#include <iostream>
#include <cmath>

using namespace std;

struct dado
{
    int status;
    int k;
};

int hash_insert(dado t[], int m, int k)
{
    int i = k % m;
    int j = i;
    do
    {
        if (t[j].status == 0)
        {
            t[j].status = 1;
            t[j].k = k;
            return j;
        }
        j = (j + 1) % m;
    } while (j != i);
    return -1;
}

int main()
{

    int m;
    dado t[100];

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        t[i].status = 0;
        t[i].k = -1;
    }

    int k;
    cin >> k;
    while (k != 0)
    {
        hash_insert(t, m, k);
        cin >> k;
    }

    for (int i = 0; i < m; i++)
    {
        cout << t[i].k << " ";
    }

    return 0;
}