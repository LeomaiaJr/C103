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

int hash_search(dado t[], int m, int k)
{
    int i = k % m;
    int j = i;
    do
    {
        if (t[j].status == 0)
            return -1;
        if (t[j].k == k)
            return j;
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

    int find, result;
    cin >> find;

    result = hash_search(t, m, find);

    if (result == -1)
        cout << "Chave " << find << " nao encontrada" << endl;
    else
        cout << "Chave " << find << " encontrada na posicao " << result << endl;
    return 0;
}

// USANDO QUADRATICA
// int hash_aux(int k, int m)
// {
//     int aux = k % m;

//     if (aux < 0)
//         aux = aux + m;

//     return aux;
// };

// int hash1(int k, int i, int m, int c1, int c2)
// {
//     int aux;

//     aux = (hash_aux(k, m) + (c1 * i) + (c2 * i * i)) % m;

//     return aux;
// };

// int hash_insert(dado t[], int m, int k, int c1, int c2)
// {
//     int i = 0;
//     int j;
//     do
//     {
//         j = hash1(k, i, m, c1, c2);

//         if (t[j].status != 1)
//         {
//             t[j].k = k;
//             t[j].status = 1;
//             return j;
//         }
//         else
//             i++;
//     } while (i != m);
//     return -1;
// }

// int hash_search(dado t[], int m, int k, int c1, int c2)
// {

//     int i = 0;
//     int j;
//     do
//     {
//         j = hash1(k, i, m, c1, c2);

//         if (t[j].k == k)
//             return j;
//         else
//             i++;
//     } while (t[j].status != 0 && i < m);
//     return -1;
// }
