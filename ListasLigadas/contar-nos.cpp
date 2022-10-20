#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista)
{
    int cont = 0;
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        cont++;
    }
    return cont;
}

int main()
{
    list<int> fila;

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

    cout << contar(fila) << endl;

    while (!fila.empty())
        fila.pop_front();

    return 0;
}