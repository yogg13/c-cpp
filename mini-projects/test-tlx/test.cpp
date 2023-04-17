#include <iostream>

using namespace std;

int main()
{
    int angka[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

    for (int x = 0; x < 3; x++)
    {
        cout << endl;
        for (int y = 0; y < 3; y++)
        {
            cout << angka[x][y] << " ";
        }
    }

    // int x1, y1, x2, y2;

    // cout << "Masukkan angka: ";
    // cin >> x1 >> y1 >> x2 >> y2;

    // int angka[] = {x1, y1, x2, y2};
    // int length = sizeof(angka) / sizeof(*angka);

    // cout << "Hasilnya: " << length;

    return 0;
}