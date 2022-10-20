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

int main()
{

    int k;
    int m;

    do
    {
        cin >> k >> m;
        if (k != 0 && m != 0)
        {
            cout << hash_aux(k, m) << endl;
        }
    } while (k != 0 && m != 0);

    return 0;
}