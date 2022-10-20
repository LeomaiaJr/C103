#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, int x)
{
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        if (*it == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    list<int> fila;
    list<int>::iterator x;

    int find;

    int flag = 1;
    while (flag)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            flag = 0;
        }
        else
        {
            fila.push_back(n);
        }
    }

    cin >> find;

    if (encontrar(fila, find))
    {
        cout << "Encontrado" << endl;
    }
    else
    {
        cout << "Nao encontrado" << endl;
    }
    
    while (!fila.empty())
        fila.pop_front();

    return 0;
}