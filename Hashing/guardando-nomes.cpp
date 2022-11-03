#include <iostream>
#include <iomanip>
#include <list>
#include <cstring>

using namespace std;

struct dado
{
    char info[50];
    int k;
    int status;
};

int hash_insert(dado *tabela, int m, char *info)
{
    int i, j, k, h1, h2, h;
    k = 0;
    for (i = 0; i < strlen(info); i++)
    {
        k += info[i];
    }
    h1 = k % m;
    h2 = 1 + (k % (m - 1));
    i = 0;
    do
    {
        h = (h1 + i * h2) % m;
        if (tabela[h].status == 0)
        {
            strcpy(tabela[h].info, info);
            tabela[h].k = k;
            tabela[h].status = 1;
            return h;
        }
        i++;
    } while (i != m);
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

int hash_remove(dado t[], int m, int k)
{
    int i = hash_search(t, m, k);
    if (i != -1)
    {
        t[i].status = 2;
        t[i].k = -1;
    }
    return i;
}

int list_table(dado t[], int m)
{
    for (int i = 0; i < m; i++)
    {
        if (t[i].status == 1)
            cout << t[i].info << endl;
        else
            cout << "vazio" << endl;
    }
    return 0;
}

int main()
{
    int m;
    cin >> m;
    dado t[m];

    for (int i = 0; i < m; i++)
    {
        t[i].status = 0;
        t[i].k = -1;
    }

    int op;
    cin >> op;

    while (op != 5)
    {
        if (op == 1)
        {
            cin.ignore();
            char info[50];
            cin.getline(info, 50);
            hash_insert(t, m, info);
        }
        else if (op == 2)
        {
            cin.ignore();
            char info[50];
            cin.getline(info, 50);

            int k = 0;
            for (int i = 0; info[i] != '\0'; i++)
            {
                k = k + info[i];
            }
            int pos = hash_search(t, m, k);

            if (pos == -1)
                cout << info << " nao encontrado" << endl;
            else
                cout << info << " encontrado na posicao " << pos << endl;
        }
        else if (op == 3)
        {
            cin.ignore();
            char info[50];
            cin.getline(info, 50);

            int k = 0;
            for (int i = 0; info[i] != '\0'; i++)
            {
                k = k + info[i];
            }
            hash_remove(t, m, k);
        }
        else if (op == 4)
        {
            list_table(t, m);
        }
        cin >> op;
    }

    return 0;
}