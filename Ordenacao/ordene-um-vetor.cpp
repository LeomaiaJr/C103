#include <iostream>
#include <cmath>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
{
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];
    do
    {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);
    if (dir - i >= 0)
        quickSort(vetor, tamanho, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, tamanho, esq, j);
}

int main()
{

    int lista[100];
    int number;
    int count = 0;

    do
    {
        cin >> number;
        if (number != -1)
        {
            lista[count] = number;
            count++;
        }
    } while (number != -1);

    quickSort(lista, count, 0, count - 1);

    for (int i = 0; i < count; i++)
    {
        cout << lista[i] << " ";
    }
}