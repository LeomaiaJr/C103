#include <iostream>
#include <cmath>

using namespace std;

int hash_aux(int k, int m)
{
    int aux = k % m;

    if (aux < 0)
        aux += m;

    return aux;
}

int hash1(int k, int i, int m)
{
    return (hash_aux(k, m) + i) % m;
}

int main()
{

    int k;
    int m;

    cin >> k >> m;

    for (int i = 0; i < m; i++)
    {
        cout << hash1(k, i, m) << " ";
    }

    return 0;
}