#include <iostream>
using namespace std;

int main()
{
    int length, key, pos;

    cout << "Input jumlah index: ";
    cin >> length;

    int angka[length];
    for (int x = 0; x < length; x++)
    {
        cout << "Masukkan angka di index ke- " << x << ": ";
        cin >> angka[x];
    }
    cout << endl;

    cout << "Data array: ";
    for (int y = 0; y < length; y++)
    {
        cout << angka[y] << " ";
    }
    cout << endl;
    cout << endl;

    // Menampilkan awalan sorting selection
    cout << "Sebelum sorting: ";
    for (int i = 0; i < length; i++)
    {
        cout << angka[i] << " ";
    }
    cout << endl;

    // Proses sorting dengan metode Selection sort
    for (int x = 0; x < length; x++)
    {
        key = angka[x];
        pos = x;

        for (int y = x; y < length; y++)
        {
            if (angka[y] < key)
            {
                key = angka[y];
                pos = y;
            }
        }
        angka[pos] = angka[x];
        angka[x] = key;
        cout << endl;

        // Menampilkan hasil sortingnya satu persatu,
        // setelah proses sorting diatas dilakukan
        cout << "Proses selection: ";
        for (int z = 0; z < length; z++)
        {
            cout << angka[z] << " ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Setelah Sorting: ";
    for (int hasil = 0; hasil < length; hasil++)
    {
        cout << angka[hasil] << " ";
    }

    return 0;
}