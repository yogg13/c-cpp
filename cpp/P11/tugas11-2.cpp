#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

int main()
{
    queue<string> pasien, temp;
    string inputData;
    char pilih;

    pasien.push("Budi");
    pasien.push("Udin");
    pasien.push("Joni");

    cout << "\n\t=== Pendaftaran pasien di Klinik Syariah ===\t\n\n";

    cout << "Daftar Pasien sekarang: " << endl;
    do
    {
        cout << "-> " << pasien.front() << endl;
        temp.push(pasien.front());
        pasien.pop();
    } while (!pasien.empty());
    cout << endl;

    cout << "Apakah Anda ingin daftar? (pilih y / n) = ";
    cin >> pilih;
    cout << endl;
    // system("cls");

    if (pilih == 'y' || pilih == 'Y')
    {
        cout << "Masukkan Nama: ";
        cin >> inputData;
        cout << "--------------" << endl;
        cout << endl;
        temp.push(inputData);

        cout << "Daftar Pasien sekarang: " << endl;
        while (!temp.empty())
        {
            cout << "-> " << temp.front();
            cout << endl;
            pasien.push(temp.front());
            temp.pop();
        }
        cout << endl;
    }
    else
    {
        cout << "Sampai jumpa kembali" << endl;
    }

    while (!pasien.empty())
    {
        temp.push(pasien.front());
        pasien.pop();
    }

    cout << "=== Panggilan pasien atas nama: " << temp.front() << " ===" << endl;
    temp.pop();
    cout << endl;

    cout << "=> Jumlah pasien saat ini: " << temp.size() << " <=" << endl;
    cout << endl;

    cout << "-> Panggilan Pasien selanjutnya: " << temp.front() << endl;
    temp.pop();
    cout << endl;

    // cout << "=> Jumlah pasien saat ini: " << temp.size() << " <=" << endl;
    // cout << endl;

    // cout << "-> Panggilan Pasien selanjutnya: " << temp.front() << endl;

    return 0;
}