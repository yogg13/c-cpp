#include <iostream>
using namespace std;

void prosesQuick(int angka[], int indexAwal, int indexAkhir)
{
    int i = indexAwal, j = indexAkhir, pivot = angka[indexAwal];

    while (i <= j)
    {

        while (angka[i] < pivot)
        {
            i++;
        }

        while (angka[j] > pivot)
        {
            j--;
        }

        if (i <= j)
        {
            int temp = angka[i];
            angka[i] = angka[j];
            angka[j] = temp;
            i++;
            j--;
        }
    }

    // Menampilkan setiap proses dari metode Quick;
    //  cout << endl;
    //  cout << "Proses Quick sorting: ";
    //  for (int i = 0; i < 7; i++)
    //  {
    //      cout << angka[i] << " ";
    //  }
    //  cout << endl;

    if (indexAwal < j)
    {
        prosesQuick(angka, indexAwal, j);
    }

    if (i < indexAkhir)
    {
        prosesQuick(angka, i, indexAkhir);
    }
}

void resultQuick(int angka[], int length)
{
    cout << "Sebelum Quick Sort: ";
    for (int a = 0; a < length; a++)
    {
        cout << angka[a] << " ";
    }
    cout << endl;

    prosesQuick(angka, 0, length);

    cout << endl;
    cout << "Sesudah Quick Sort: ";
    for (int a = 0; a < length; a++)
    {
        cout << angka[a] << " ";
    }
}

int main()
{
    int angka[] = {7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(angka) / sizeof(*angka);

    resultQuick(angka, length);
    return 0;
}
