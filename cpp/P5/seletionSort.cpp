// Selection sort in C++

#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int data[], int panjangArray)
{
    for (int kolom = 0; kolom < panjangArray - 1; kolom++)
    {
        int minimum = kolom;
        for (int i = kolom + 1; i < panjangArray; i++)
        {
            if (data[i] > data[minimum])
                minimum = i;
        }
        int temp = data[kolom];
        data[kolom] = data[minimum];
        data[minimum] = temp;
    }
}

int main()
{
    int data[] = {5, 3, 9, 7, 1, 13};
    int panjang = sizeof(data) / sizeof(data[0]);
    cout << "\nBefore sorted array in ascending order: ";
    printArray(data, panjang);
    cout << endl;

    selectionSort(data, panjang);
    cout << "After sorted array in Acsending Order: ";
    printArray(data, panjang);
}