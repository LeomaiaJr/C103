#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    int *vetor;
    int *p;

    cin >> N;

    vetor = new int[N];
    p = vetor;

    for (int i = 0; i < N; i++)
    {
        cin >> *p;
        p++;
    }

    p = vetor;

    int maior = *p;
    for (int i = 0; i < N; i++)
    {
        if (*p > maior)
            maior = *p;

        p++;
    }

    cout << maior << endl;

    delete[] vetor;

    return 0;
}