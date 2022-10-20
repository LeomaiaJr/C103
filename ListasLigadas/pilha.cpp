#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> pilha;

    for (int i = 0; i < 4; i++)
    {
        int num;
        cin >> num;
        pilha.push_front(num);
    }

    while (!pilha.empty())
    {
        cout << pilha.front() << endl;
        pilha.pop_front();
    }

    return 0;
}