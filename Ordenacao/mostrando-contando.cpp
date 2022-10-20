#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int bubbleSort(int vector[], int size)
{
    int trabVector[size - 2];
    int trabSize = 0;

    int i, j;
    int trab;
    bool change;
    int limit;
    change = true;
    limit = size - 1;
    while (change)
    {
        change = false;
        for (i = 0; i < limit; i++)
            if (vector[i] > vector[i + 1])
            {
                trab = vector[i];
                trabVector[trabSize] = trab;
                trabSize++;

                vector[i] = vector[i + 1];
                vector[i + 1] = trab;
                j = i;
                change = true;
            }
        limit = j;
    }

    for (i = 0; i < trabSize; i++)
    {
        cout << "New trab:" << trabVector[i] << endl;
    }

    cout << "Contador:" << trabSize << endl;
}

int main()
{
    int size;
    cin >> size;

    int list[size];

    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }

    bubbleSort(list, size);

    return 0;
}