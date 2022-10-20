#include <iostream>
#include <iomanip>

using namespace std;

struct grade
{
    float n1, n2, n3, n4, media;
};

int main()
{

    grade *p = new grade;

    cin >> p->n1 >> p->n2 >> p->n3 >> p->n4;

    p->media = (p->n1 + p->n2 + p->n3 + p->n4) / 4;

    cout << fixed << setprecision(2) << p->media << endl;

    delete p;

    return 0;
}