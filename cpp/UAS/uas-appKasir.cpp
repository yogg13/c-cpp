/*

Buatlah sebuah aplikasi kasir untuk sebuah toko dengan tema bebas.
Aplikasi ini menggunakan c++ linkedlist dan memiliki 5 fungsi utama.

1) Daftar barang
Fungsi daftar barang memungkinkan kita melihat semua nama barang yang sudah tersimpan
di dalam linked list.
(*Nilai tambah jika terdapat opsi pengurutan berdasaran jumlah stock)
2) Tambah Barang
Fungsi ini berfungi untuk menambahkan barang baru kedalam linked list
3) Hapus Barang
Fungsi ini berfunsi untuk menghapus barang yang ada didalam linked list
4) Cari barang
Berfungsi untuk menampilkan detail (harga/stock/dll) sebuah barang berdasarkan namanya
(*Nilai tambah jika bisa mengedit data tersebut)
5) Transaksi (opsional dengan tambahan nilai)
Dalam fungsi transaksi ini kita bisa memilih barang yang akan dibeli oleh pembeli dan
mengurangi stock nya. Tidak lupa juga menampilkan struk nya

*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Barang
{
    string nama;
    int harga;
    int stock;
    Barang *next;
};
Barang *head = NULL;

int main(); // prototype function

// Fungsi untuk menambahkan barang baru ke linked list
/*
Time Complexity: O(n)
*/
void tambahBarang(string nama, int harga, int stock)
{
    Barang *box = new Barang;
    box->nama = nama;
    box->harga = harga;
    box->stock = stock;
    box->next = NULL;

    if (head == NULL)
    {
        head = box;
    }
    else
    {
        Barang *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = box;
    }
}

// Fungsi untuk menampilkan semua barang yang tersimpan dalam linked list dann urutkan berdasarkan stock
void daftarBarang()
{
    // Mengurutkan Menggunakan insertion sort
    Barang *temp = head;

    if (head == NULL)
    {
        cout << "Tidak ada barang." << endl;
    }
    else
    {
        while (temp != NULL)
        {
            Barang *temp2 = temp->next;
            while (temp2 != NULL)
            {
                // Mengurutkan berdasarkan stock dari yang terkecil ke terbesar
                if (temp->stock > temp2->stock)
                {
                    int tempStock = temp->stock;
                    temp->stock = temp2->stock;
                    temp2->stock = tempStock;

                    string tempNama = temp->nama;
                    temp->nama = temp2->nama;
                    temp2->nama = tempNama;

                    int tempHarga = temp->harga;
                    temp->harga = temp2->harga;
                    temp2->harga = tempHarga;
                }
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
    }

    // Menampilkan
    cout << "===============================" << endl;
    cout << endl;
    cout << "Daftar barang-barang yang tersedia: " << endl;
    cout << endl;
    temp = head;
    while (temp != NULL)
    {
        cout << "Nama: " << temp->nama << endl;
        cout << "Harga: " << temp->harga << endl;
        cout << "Stock: " << temp->stock << endl;
        cout << endl;
        temp = temp->next;
    }
}

// Fungsi untuk menghapus barang dari linked list
void hapusBarang(string nama)
{
    Barang *temp = head;

    if (head == NULL)
    {
        cout << "Tidak Ada Barang!" << endl;
    }
    else if (nama == temp->nama)
    {
        head = head->next;
        delete temp;
    }
    else
    {
        while (nama != temp->nama)
        {
            temp = temp->next;
        }
        head->next = temp->next;
        delete temp;
    }
}

// Fungsi untuk mencari barang berdasarkan namanya
void cariBarang(string nama)
{
    Barang *temp = head;
    while (temp != NULL)
    {
        if (temp->nama == nama)
        {
            cout << "Nama: " << temp->nama << endl;
            cout << "Harga: " << temp->harga << endl;
            cout << "Stock: " << temp->stock << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Barang tidak ditemukan." << endl;
}

// Fungsi untuk melakukan transaksi pembelian barang
void transaksi(string nama, int jumlah)
{

    // get date and time
    //  -> arrow operator melakukan akses kedalam elemen struct mirip ltm.variable
    time_t now = time(0);            // mengambil waktu yang sekarang
    tm *ltm = localtime(&now);       // tm adalah  struct yang menyimpan waktu dan tanggal dalam bentuk integer
    int tahun = 1900 + ltm->tm_year; // tahun sekarang
    int bulan = 1 + ltm->tm_mon;     // 1 + bulan sekarang = bulan sekarang
    int hari = ltm->tm_mday;         // mengambil hari
    int jam = ltm->tm_hour;          // mengambil jam

    Barang *temp = head;
    while (temp != NULL)
    {
        if (temp->nama == nama)
        {
            if (temp->stock >= jumlah)
            {
                temp->stock -= jumlah;
                cout << endl;
                cout << "\tTransaksi berhasil." << endl;
                cout << "\tStruk ";
                cout << "(" << hari << "/" << bulan << "/" << tahun << ")" << endl;
                cout << endl;
                cout << "Nama: " << temp->nama << endl;
                cout << "Harga: " << temp->harga << endl;
                cout << "Jumlah: " << jumlah << endl;
                cout << "Total: " << temp->harga * jumlah << endl;
                main();
            }
            else
            {
                cout << "Stock tidak mencukupi." << endl;
            }
            return;
        }
        temp = temp->next;
    }
    cout << "Barang tidak ditemukan." << endl;
}

int main()
{
    cout << "===============================" << endl;
    cout << "Selamat datang di aplikasi kasir!" << endl;
    cout << "1. Daftar Barang" << endl;
    cout << "2. Tambah Barang" << endl;
    cout << "3. Hapus Barang" << endl;
    cout << "4. Cari Barang" << endl;
    cout << "5. Transaksi" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih menu: ";
    int menu;
    cin >> menu;

    while (menu != 6)
    {

        switch (menu)
        {
        case 1:
            daftarBarang();
            cout << "===============================" << endl;
            break;
        case 2:
        {
            cout << endl;
            string nm;
            int harga;
            int stock;
            cout << "Masukkan nama barang: ";
            getline(cin, nm);
            getline(cin, nm);
            cout << "Masukkan harga barang: ";
            cin >> harga;
            cout << "Masukkan stock barang: ";
            cin >> stock;
            tambahBarang(nm, harga, stock);
            int main();
            cout << "===============================" << endl;
        }
        break;
        case 3:

        {
            cout << endl;
            daftarBarang();
            string nm2;
            cout << "Masukkan nama barang yang ingin dihapus: ";
            getline(cin, nm2);
            getline(cin, nm2);
            hapusBarang(nm2);
            cout << "===============================" << endl;
            main();
        }
        break;
        case 4:
        {
            daftarBarang();
            string nm3;
            cout << "Masukkan nama barang yang ingin dicari: ";
            getline(cin, nm3);
            getline(cin, nm3);
            cariBarang(nm3);
            cout << "===============================" << endl;
        }
        break;
        case 5:
        {

            daftarBarang();
            cout << endl;
            string nm4;
            int jumlah;
            cout << "Masukkan nama barang: ";
            getline(cin, nm4);
            getline(cin, nm4);
            cout << "Masukkan jumlah barang: ";
            cin >> jumlah;
            transaksi(nm4, jumlah);
            cout << "===============================" << endl;
        }
        break;
        default:
            cout << "Menu tidak ditemukan." << endl;
            break;
        }
        cout << "Pilih menu: ";
        cin >> menu;
    }
    cout << "Terima kasih telah menggunakan aplikasi kasir ini." << endl;

    return 0;
}