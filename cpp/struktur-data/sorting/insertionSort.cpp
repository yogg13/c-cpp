#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int key, length;
    cout << "Input jumlah index: ";
    cin >> length;

    int angka[length];
    for (int x = 0; x < length; x++)
    {
        cout << "Masukkan angka di index ke- " << x << ": ";
        cin >> angka[x];
    }
    cout << endl;
    // system("cls");

    cout << "Data array: ";
    for (int y = 0; y < length; y++)
    {
        cout << angka[y] << " ";
    }
    cout << endl;

    // Proses sorting dengan metode insertion
    for (int x = 1; x < length; x++)
    {
        for (int y = x; y > 0; y--)
        {
            if (angka[y] < angka[y - 1])
            {
                key = angka[y];
                angka[y] = angka[y - 1];
                angka[y - 1] = key;
                cout << endl;
            }
            else
            {
                cout << endl;
                cout << "break";
                break;
            }

            // Menampilkan hasil sortingnya satu persatu,
            // setelah proses sorting diatas dilakukan
            cout << "Proses sorting: ";
            for (int z = 0; z < length; z++)
            {
                cout << angka[z] << " ";
            }
        }

        cout << endl;
        cout << "---------------" << endl;
    }

    cout << endl;
    cout << "Setelah sorting: ";
    for (int i = 0; i < length; i++)
    {
        cout << angka[i] << " ";
    }

    return 0;
}