#include <iostream>

using namespace std;

int main()
{
    int height;
    char result;

    cout << "Masukkan jumlah tinggi: ";
    cin >> height;

    cout << "Masukkan jenis karakter: ";
    cin >> result;

    // Pattern char 1.0
    for (int x = 1; x <= height; x++)
    {
        for (int y = height; y >= x; y--)
        {
            cout << " ";
        }

        for (int z = 1; z <= x; z++)
        {
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}