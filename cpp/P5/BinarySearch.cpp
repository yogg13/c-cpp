#include <iostream>
using namespace std;

int binarySearch(int data[], int cariValue, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (data[mid] == cariValue)
            return mid;

        if (data[mid] < cariValue)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main(void)
{
    // int data[] = {3, 4, 5, 6, 7, 8, 9};
    // int cariValue = 4;
    // int panjang = sizeof(data) / sizeof(data[0]);
    int panjang, cariValue;

    cout << "Input jumlah index: ";
    cin >> panjang;

    int data[panjang];
    for (int x = 0; x < panjang; x++)
    {
        cout << "Masukkan nilai index ke- " << x << ": ";
        cin >> data[x];
    }
    cout << endl;

    cout << "Data array: ";
    for (int y = 0; y < panjang; y++)
    {
        cout << data[y] << " ";
    }
    cout << endl;
    cout << endl;

    cout << "Data yang ingin dicari: ";
    cin >> cariValue;
    cout << endl;

    int hasil = binarySearch(data, cariValue, 0, panjang - 1);
    if (hasil == -1)
        cout << "Not found!";
    else
        cout << "Data ditemukan di index ke- " << hasil;
}