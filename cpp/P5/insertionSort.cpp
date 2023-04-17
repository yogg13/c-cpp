#include <iostream>
using namespace std;

void printArray(int data[], int panjangArray)
{
    for (int i = 0; i < panjangArray; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

void insertionSort(int data[], int panjangArray)
{
    for (int step = 1; step < panjangArray; step++)
    {
        int key = data[step];
        int kolomYgDiCek = step - 1;

        while (key > data[kolomYgDiCek] && kolomYgDiCek >= 0)
        {
            data[kolomYgDiCek + 1] = data[kolomYgDiCek];
            --kolomYgDiCek;
        }
        data[kolomYgDiCek + 1] = key;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 3, 13};
    int panjang = sizeof(data) / sizeof(data[0]);
    cout << "\nBefore sorted array in descending: ";
    printArray(data, panjang);

    insertionSort(data, panjang);
    cout << "\nAfter sorted array in descending: ";
    printArray(data, panjang);

    return 0;
}