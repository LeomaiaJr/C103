#include <iostream>

using namespace std;

int customPow(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    else
        return base * customPow(base, exponent - 1);
}

int main()
{

    int a, n;

    cin >> a >> n;

    cout << customPow(a, n) << endl;
    return 0;
}