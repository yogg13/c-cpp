#include <iostream>
using namespace std;

int main()
{
    int namaOperasi, jenisPenyakit;
penyakit:
    cout << ">> Menu biaya operasi <<" << endl;
    cout << "1. Biaya operasi Mata" << endl;
    cout << "2. Biaya operasi Jantung\n\n";
    cout << "Masukkan nomer pilihan Anda: ";
    cin >> namaOperasi;

mata:
    switch (namaOperasi)
    {
    case 1:
        cout << "\n>> Jenis - jenis penyakit Mata <<" << endl;
        cout << "1. Katarak" << endl;
        cout << "2. Plus / Minus" << endl;
        cout << "3. Silinder\n\n";
        cout << "Masukkan nomor pilihan Anda: ";
        cin >> jenisPenyakit;
        if (jenisPenyakit == 1)
        {
            cout << "Biaya operasi Mata Katarak = Rp. 7.500.000";
        }
        else if (jenisPenyakit == 2)
        {
            cout << "Biaya operasi Mata Plus / Minus = Rp. 5.000.000";
        }
        else if (jenisPenyakit == 3)
        {
            cout << "Biaya operasi Mata Silinder = Rp. 4.000.000";
        }
        else
        {
            cout << "Input yang Anda pilih tidak tersedia!" << endl;
            cout << "Silahkan input pilihan yang tersedia saat ini!" << endl;
            goto mata;
        }
        break;

    jantung:
    case 2:
        cout << "\n>> Jenis - jenis penyakit Jantung <<" << endl;
        cout << "1. Jantung Koroner" << endl;
        cout << "2. Katup Jantung" << endl;
        cout << "3. Otot Jantung\n\n";
        cout << "Masukkan nomor pilihan Anda: ";
        cin >> jenisPenyakit;
        if (jenisPenyakit == 1)
        {
            cout << "Biaya operasi Jantung Koroner = Rp. 500.000.000";
        }
        else if (jenisPenyakit == 2)
        {
            cout << "Biaya operasi Katup Jantung = Rp. 350.000.000";
        }
        else if (jenisPenyakit == 3)
        {
            cout << "Biaya operasi Otot Jantung = Rp. 450.000.000";
        }
        else
        {
            cout << "Input yang Anda pilih tidak tersedia!" << endl;
            cout << "Silahkan input pilihan yang tersedia saat ini!" << endl;
            goto jantung;
        }
        break;

    default:
        cout << "Input yang Anda masukkan tidak tersedia!";
        goto penyakit;
        break;

        return 0;
    }
}