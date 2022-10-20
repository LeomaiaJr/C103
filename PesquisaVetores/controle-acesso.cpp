#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x)
{
    bool achou;
    int baixo, meio, alto;
    baixo = 0;
    alto = tamanho - 1;
    achou = false;
    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else
            achou = true;
    }
    if (achou)
        return meio;
    else
        return -1;
}

int main()
{
    int array[100];
    int find;

    int flag = 1;
    int counter = 0;
    while (flag == 1)
    {
        int number;
        cin >> number;

        if (number != -1)
        {
            array[counter] = number;
        }
        else
        {
            flag = 0;
        }

        counter++;
    }

    cin >> find;

    int result = binaria(array, counter, find);

    if (result == -1)
    {
        cout << "Nao possui acesso" << endl;
    }
    else
    {
        cout << "Possui acesso" << endl;
    }

    return 0;
}