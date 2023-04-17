#include <iostream>

using namespace std;

int main()
{
    int angka[] = {1, 2, 3, 5, 7, 2, 7, 9};
    int length = sizeof(angka) / sizeof(*angka);

    int target;
    cout << "Masukkan target angka: ";
    cin >> target;

    int tempNumb;

    for (int x = 0; x < length; x++)
    {
        for (int y = 1; y < length; y++)
        {
            tempNumb = angka[x] + angka[y];

            if (tempNumb == target && x != y)
            {
                cout << angka[x] << " ";
                cout << angka[y] << " ";
            }
        }
    }

    return 0;
}