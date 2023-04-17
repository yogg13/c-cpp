#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // Urutan tugasnya:
    //  Daftar
    //  panggil (kemudian dihapus)
    //   tampilkan jumlah data sekarang
    //  tampilkan data berikutnya

    /*Member Function in Stack
    size() -> Untuk menampilkan jumlah data pada Stack,
    push()-> Untuk menambahkan data ke dalam Stack,
    pop()-> Untuk menghapus data di dalam Stack,
    top() -> Untuk menampilkan data paling atas/akhir dalam Stack,
    */

    stack<string> namaSiswa, tampung;
    char pilih;
    string inputData;

    namaSiswa.push("rizky");
    namaSiswa.push("yoga");
    namaSiswa.push("alif");

    cout << "\n\t=== Pengambilan Raport Siswa Kelas 1 ===\t\n\n";
    cout << "Daftar Antrian Siswa:" << endl;

    while (!namaSiswa.empty())
    {
        cout << "-> " << namaSiswa.top() << endl;
        tampung.push(namaSiswa.top());
        namaSiswa.pop();
    }
    cout << endl;

    cout << "Apakah Anda ingin Daftar? (pilih y / n) = ";
    cin >> pilih;

    if (pilih == 'y' || pilih == 'Y')
    {
        cout << "Masukkan Nama Anda: ";
        cin >> inputData;
    }
    else
    {
        cout << "Terima Kasih..." << endl;
    }

    while (!tampung.empty())
    {
        namaSiswa.push(tampung.top());
        tampung.pop();
    }
    cout << endl;

    namaSiswa.push(inputData);

    while (!namaSiswa.empty())
    {
        cout << "-> " << namaSiswa.top() << endl;
        tampung.push(namaSiswa.top());
        namaSiswa.pop();
    }
    cout << endl;

    cout << "Jumlah data setelah inputan: " << tampung.size() << endl;
    cout << endl;

    // manggil nama siswa
    cout << "Panggilan atas nama = " << tampung.top() << endl;
    tampung.pop();

    cout << "Jumlah data setelah di hapus: " << tampung.size() << endl;
    cout << endl;

    cout << "Panggilan selanjutnya atas nama = " << tampung.top() << endl;
    tampung.pop();
    cout << endl;

    cout << "Jumlah data setelah di hapus: " << tampung.size() << endl;
    cout << endl;

    cout << "Panggilan selanjutnya atas nama = " << tampung.top() << endl;

    return 0;
}