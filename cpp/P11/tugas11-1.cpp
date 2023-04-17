#include <iostream>
#include <stdlib.h>
#include <stack>

using namespace std;

int main()
{
    stack<string> pasien, temp;
    string inputData;
    char pilih;

    pasien.push("Budi");
    pasien.push("Udin");
    pasien.push("Joni");

    cout << "\n\t=== Pendaftaran pasien di Klinik Syariah ===\t\n\n";

    cout << "Daftar Pasien sekarang: " << endl;
    do
    {
        cout << "-> " << pasien.top() << endl;
        temp.push(pasien.top());
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

        cout << "Daftar Pasien sekarang: " << endl;
        while (!temp.empty())
        {
            pasien.push(temp.top());
            temp.pop();
        }

        pasien.push(inputData);

        while (!pasien.empty())
        {
            cout << "-> " << pasien.top();
            cout << endl;
            temp.push(pasien.top());
            pasien.pop();
        }
        cout << endl;
    }
    else
    {
        cout << "Sampai jumpa kembali" << endl;
    }

    while (!temp.empty())
    {
        pasien.push(temp.top());
        temp.pop();
    }

    cout << "=== Panggilan pasien atas nama: " << pasien.top() << " ===" << endl;
    pasien.pop();
    cout << endl;

    cout << "=> Jumlah pasien saat ini: " << pasien.size() << " <=" << endl;
    cout << endl;

    cout << "-> Panggilan Pasien selanjutnya: " << pasien.top() << endl;

    return 0;
}