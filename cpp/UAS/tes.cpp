#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // get date and time
    //  -> arrow operator melakukan akses kedalam elemen struct mirip ltm.variable
    time_t now = time(0);            // mengambil waktu yang sekarang
    tm *ltm = localtime(&now);       // tm adalah  struct yang menyimpan waktu dan tanggal dalam bentuk integer
    int tahun = 1900 + ltm->tm_year; // tahun sekarang
    int bulan = 1 + ltm->tm_mon;     // 1 + bulan sekarang = bulan sekarang
    int hari = ltm->tm_mday;         // mengambil hari
    int jam = ltm->tm_hour;          // mengambil jam

    cout << tahun << endl;
    cout << bulan << endl;
    cout << hari << endl;
    cout << jam << endl;
    return 0;
}