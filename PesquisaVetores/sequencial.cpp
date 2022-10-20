#include <iostream>

using namespace std;

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

    int found = 0;
    for (int i = 0; i < counter; i++)
    {
        if (array[i] == find)
        {
            found = 1;
            cout << find << " encontrado na posicao " << i << endl;
        }
    }

    if (found == 0)
    {
        cout << find << " nao encontrado" << endl;
    }

    return 0;
}
