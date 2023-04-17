#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // Daftar
    // panggil (kemudian dihapus)
    //  tampilkan jumlah data sekarang
    // tampilkan data berikutnya

    /* Member Function in queue
    size() -> Untuk menampilkan jumlah data pada Queue,
    push() -> Untuk menambahkan data ke dalam Queue,
    pop() -> Untuk menghapus data di dalam Queue,
    front() -> Untuk menampilkan data paling awal dalam Queue,
    back() -> Untuk menampilkan data paling akhir dalam Queue,
    */

    queue<string> namaSiswa, tampung;
    char pilih;
    string inputData;

    namaSiswa.push("rizky");
    namaSiswa.push("yoga");
    namaSiswa.push("alif");

    cout << "\n\t=== Pengambilan Raport Siswa Kelas 1 ===\t\n\n";
    cout << "Daftar Antrian Siswa:" << endl;

    while (!namaSiswa.empty())
    {
        cout << "-> " << namaSiswa.front() << endl;
        tampung.push(namaSiswa.front());
        namaSiswa.pop();
    }
    cout << endl;

    cout << "Apakah Anda ingin Daftar? (pilih y / n) = ";
    cin >> pilih;

    if (pilih == 'y' || pilih == 'Y')
    {
        cout << "Masukkan Nama Anda: ";
        cin >> inputData;
        cout << endl;
    }
    else
    {
        cout << "Terima Kasih..." << endl;
    }

    tampung.push(inputData);

    cout << "Daftar Siswa Sekarang: " << endl;
    while (!tampung.empty())
    {
        cout << "-> " << tampung.front() << endl;
        namaSiswa.push(tampung.front());
        tampung.pop();
    }
    cout << endl;

    cout << "Jumlah data setelah inputan: " << namaSiswa.size() << endl;
    cout << endl;

    // manggil nama siswa
    cout << "Panggilan atas nama = " << namaSiswa.front() << endl;
    namaSiswa.pop();

    cout << "Jumlah data setelah di hapus: " << namaSiswa.size() << endl;
    cout << endl;

    cout << "Panggilan selanjutnya atas nama = " << namaSiswa.front() << endl;
    namaSiswa.pop();
    cout << endl;

    cout << "Jumlah data setelah di hapus: " << namaSiswa.size() << endl;
    cout << endl;

    cout << "Panggilan selanjutnya atas nama = " << namaSiswa.front() << endl;
    namaSiswa.pop();

    cout << "Jumlah data setelah di hapus: " << namaSiswa.size() << endl;
    cout << endl;

    cout << "Panggilan selanjutnya atas nama = " << namaSiswa.front() << endl;

    return 0;
}