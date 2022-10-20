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

void sortListASC(list<int> &l1, list<int> &l2, list<int> &l3)
{
    list<int>::iterator it1 = l1.begin();
    list<int>::iterator it2 = l2.begin();

    while (it1 != l1.end() && it2 != l2.end())
    {
        if (*it1 < *it2)
        {
            l3.push_back(*it1);
            it1++;
        }
        else if (*it1 > *it2)
        {
            l3.push_back(*it2);
            it2++;
        }
        else
        {
            l3.push_back(*it1);
            it1++;
            it2++;
        }
    }

    while (it1 != l1.end())
    {
        l3.push_back(*it1);
        it1++;
    }

    while (it2 != l2.end())
    {
        l3.push_back(*it2);
        it2++;
    }
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

    sortListASC(l1, l2, l3);

    for (list<int>::iterator i = l3.begin(); i != l3.end(); i++)
    {
        cout << *i << " ";
    }

    cleanList(l1);
    cleanList(l2);
    cleanList(l3);

    return 0;
}