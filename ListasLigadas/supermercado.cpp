#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> estoque;
    list<int> venda;

    int N, operacao, codigo;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> operacao;

        if (operacao == 1)
        {
            cin >> codigo;
            estoque.push_front(codigo);
        }
        else
        {
            codigo = estoque.back();
            estoque.pop_back();
            venda.push_front(codigo);
        }
    }

    cout << "Estoque: ";
    for (list<int>::iterator it = estoque.begin(); it != estoque.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    cout << "Venda: ";
    for (list<int>::iterator it = venda.begin(); it != venda.end(); it++)
    {
        cout << *it << " ";
    }


    while (!estoque.empty())
        estoque.pop_front();

    while (!venda.empty())
        venda.pop_front();

    return 0;
}