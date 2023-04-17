#include <iostream>
using namespace std;

int main()
{
    int evaluasi;

    do
    {
        cout << "---------------" << endl;
        cout << "Pilih Nomor MENU Berikut: ";
        cout << "\n1. Ulangi?" << endl;
        cout << "2. Keluar?" << endl;
        cout << "Pilih Menu: ";
        cin >> evaluasi;
    } while (evaluasi == 1);
    if (evaluasi == 2)
    {
        cout << "Anda telah keluar!";
    }
    else
    {
        cout << "Input yang Anda masukkan tidak tersedia!";
    }
    return 0;
}