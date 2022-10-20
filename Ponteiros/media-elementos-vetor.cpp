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

    float media = 0;
    for (int i = 0; i < N; i++)
    {
        media += *p;
        p++;
    }

    media /= N;

    cout << fixed << setprecision(2) << media << endl;

    delete[] vetor;

    return 0;
}