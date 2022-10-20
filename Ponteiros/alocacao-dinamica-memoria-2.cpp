#include <iostream>
#include <iomanip>

using namespace std;

struct grade
{
    float n1, n2, n3, n4, media;
};

int main()
{
    grade *p = new grade[100];

    int count;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> p[i].n1 >> p[i].n2 >> p[i].n3 >> p[i].n4;
        p[i].media = (p[i].n1 + p[i].n2 + p[i].n3 + p[i].n4) / 4;
    }

    float soma = 0;
    for (int i = 0; i < count; i++)
    {
        soma += p[i].media;
    }

    cout << fixed << setprecision(2) << soma / count << endl;

    delete[] p;

    return 0;
}