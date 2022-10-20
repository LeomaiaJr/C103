#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x, int &index)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            index = mid;
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x, index);
        }
        return binarySearch(arr, mid + 1, r, x, index);
    }
    return -1;
}

int main()
{

    int alunos[10000];
    int count;
    int find;
    int index = 0;

    cin >> count;

    for (int i = 0; i < count; i++)
    {
        cin >> alunos[i];
    }

    cin >> find;

    int result = binarySearch(alunos, 0, count - 1, find, index);

    if (result == -1)
    {
        cout << "Nao localizado" << endl;
    }
    else
    {
        cout << "Corredor " << index << endl;
    }

    return 0;
}