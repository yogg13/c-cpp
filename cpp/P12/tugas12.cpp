#include <iostream>

using namespace std;

void penjumlahan(float *paramTambah1, float *paramTambah2, float *paramResult)
{
    *paramResult = *paramTambah1 + *paramTambah2;
}

void pengurangan(float *paramKurang1, float *paramKurang2, float *paramResult)
{
    *paramResult = *paramKurang1 - *paramKurang2;
}

void perkalian(float *paramKali1, float *paramKali2, float *paramResult)
{
    *paramResult = *paramKali1 * *paramKali2;
}

void pembagian(float *paramBagi1, float *paramBagi2, float *paramResult)
{
    *paramResult = *paramBagi1 / *paramBagi2;
}

int main()
{
    float x, y, result;
    char operasi;

    cout << "=== Program Kalkulator ===\n\n";
repeat:
    cout << "Masukkan angka pertama: ";
    cin >> x;

    cout << "Pilih operatornya ( + / - / x / : ) = ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> y;

    switch (operasi)
    {
    case '+':
        penjumlahan(&x, &y, &result);
        break;

    case '-':
        pengurangan(&x, &y, &result);
        break;

    case 'x':
        perkalian(&x, &y, &result);
        break;

    case ':':
        pembagian(&x, &y, &result);
        break;

    default:
        cout << "Input operator yang Anda masukkan tidak ada!";
        cout << "\n\n";
        goto repeat;
    }

    cout << "Hasilnya = " << result;

    return 0;
}