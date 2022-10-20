#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int list[10];
    int tamanho = 0;

    int currNumber;
    do
    {
        cin >> currNumber;
        if (currNumber != 0)
        {
            list[tamanho] = currNumber;
            tamanho++;
        }
    } while (currNumber != 0);

    insertionSort(list, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}