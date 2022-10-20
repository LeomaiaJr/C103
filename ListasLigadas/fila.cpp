#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> fila;
    list<int>::iterator it;

    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        fila.push_back(num);
    }

    it = fila.begin();
    while (!fila.empty())
    {
        cout << *it << endl;
        it = fila.erase(it);
    }

    return 0;
}