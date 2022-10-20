#include <iostream>
using namespace std;

struct dado
{
    int k;
    int status;
};

int h1(int k, int m)
{
    int h = k % m;
    if (h < 0)
        h += m;
    return h;
}

int h2(int k, int m)
{
    int h = 1 + (k % (m - 1));
    if (h < 0)
        h += m;
    return h;
}

int dhash(int k, int m, int i)
{
    int h = (h1(k, m) + (i * h2(k, m))) % m;
    return h;
}

int hash1(int k, int i, int m)
{
    int h = (h1(k, m) + i) % m;
    return h;
}

int hash_insert(dado t[], int m, int k)
{
    int i = 0;
    int j;
    do
    {
        j = dhash(k, m, i);
        if (t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
        else
            i++;
    } while (i != m);

    return -1;
}

int hash_search(dado t[], int m, int k)
{
    int i = 0;
    int j;
    do
    {
        j = hash1(k, i, m);
        if (t[j].k == k)
            return j;

        i++;
    } while (t[j].status != 0 && i < m);
    return -1;
}

int hash_remove(dado t[], int m, int k)
{
    int j = hash_search(t, m, k);
    if (j != -1)
    {
        t[j].status = 2;
        t[j].k = -1;
        return 0;
    }
    else
        return -1;
}

int main(int argc, char **argv)
{

    dado T[20];
    int m;
    int option;
    int k;
    bool flag = false;

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        T[i].status = 0;
        T[i].k = -1;
    }

    do
    {
        cin >> option;
        switch (option)
        {
        case 1:
            cin >> k;
            hash_insert(T, m, k);
            break;

        case 2:
            cin >> k;
            cout << hash_search(T, m, k);
            cout << endl;
            break;

        case 3:
            cin >> k;
            hash_remove(T, m, k);
            break;

        case 4:
            for (int i = 0; i < m; i++)
            {
                cout << T[i].k << " ";
            }
            cout << endl;
            break;

        default:
            flag = true;
            break;
        }
    } while (flag != true);

    cout << endl;

    return 0;
}