#include <iostream>

using namespace std;

int main()
{
    int angka[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(angka) / sizeof(*angka);

    for (int i = 0; i < length; i++)
    {
        if (angka[i] % 5 == 0 || angka[i] % 5 == 2)
        {
            cout << "*";
        }
        else
        {
            cout << angka[i];
        }
    }

    return 0;
}