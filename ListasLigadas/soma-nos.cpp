#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista)
{
    int soma = 0;
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++)
    {
        soma += *it;
    }
    return soma;
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

    cout << soma(fila) << endl;
    
    while (!fila.empty())
        fila.pop_front();

    return 0;
}