#include <iostream>
using namespace std;

int main()
{
    int angka[] = {3, 1, 9, 2, 12, 4, 8, 5, 13, 6};
    int length = sizeof(angka) / sizeof(*angka);
    int temp;

    cout << "Sebelum sorting: ";
    for (int i = 0; i < length; i++)
    {
        cout << angka[i] << " ";
    }

    // Proses sorting
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length - x; y++)
        {
            if (angka[y] > angka[y + 1])
            {
                temp = angka[y];
                angka[y] = angka[y + 1];
                angka[y + 1] = temp;
            }
        }
    }
    cout << endl;
    cout << endl;

    cout << "Setelah sorting: ";
    for (int n = 0; n < length; n++)
    {
        cout << angka[n] << " ";
    }

    return 0;
}