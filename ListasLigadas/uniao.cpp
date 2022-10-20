#include <iostream>
#include <list>

using namespace std;

void readList(list<int> &l)
{

    int n;
    cin >> n;

    while (n != 0)
    {
        l.push_back(n);
        cin >> n;
    }
}

void sortListASC(list<int> &l)
{
    for (list<int>::iterator i = l.begin(); i != l.end(); i++)
    {
        for (list<int>::iterator j = i; j != l.end(); j++)
        {
            if (*i > *j)
            {
                int aux = *i;
                *i = *j;
                *j = aux;
            }
        }
    }
}

bool findInList(list<int> lista, int x)
{
    for (list<int>::iterator i = lista.begin(); i != lista.end(); i++)
    {
        if (*i == x)
        {
            return true;
        }
    }
    return false;
}

void cleanList(list<int> &l)
{
    while (!l.empty())
        l.pop_front();
}

int main()
{
    list<int> l1, l2, l3;

    readList(l1);
    readList(l2);

    l3.merge(l1);

    for (list<int>::iterator i = l2.begin(); i != l2.end(); i++)
    {
        if (!findInList(l3, *i))
        {
            l3.push_back(*i);
        }
    }

    sortListASC(l3);

    for (list<int>::iterator i = l3.begin(); i != l3.end(); i++)
    {
        cout << *i << " ";
    }

    
    cleanList(l1);
    cleanList(l2);
    cleanList(l3);

    return 0;
}