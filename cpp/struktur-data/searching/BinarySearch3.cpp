#include <iostream>

using namespace std;

//binary searching

int hasil (int data[], int awal, int akhir, int key) {
    int tengah = (awal + akhir) / 2;
    if (awal > akhir) {
        return -1;
    } else if (data[tengah] == key) {
        return tengah;
    } else if (data[tengah] < key) {
        return hasil(data, tengah + 1, akhir, key);
    } else {
        return hasil(data, awal, tengah - 1, key);
    }

}


int main () {
    int jumlah, key, awal, tengah, akhir, sementara;
    //memasukkan data
    cout << "jumlah index: ";
    cin >> jumlah;
    cout << endl;

    int data[jumlah];

    for (int a = 0 ; a < jumlah ; a++) {
        cout << "data ke-" << a+1 << ": ";
        cin >> data[a];
    }

    //sorting

    for (int a = 0 ; a < jumlah ; a++) {
        for (int b = 0 ; b < jumlah ; b++) {
            if (data[a] < data[b]) {
                sementara = data[a];
                data[a] = data[b];
                data[b] = sementara;
            }
        }
    }

    //menampilkan data

    cout << endl << "data setelah diurutkan: " << endl;
    for (int a = 0 ; a < jumlah ; a++) {
        cout << "data ke-" << a+1 << ": " << data[a] << endl;
    }

    //binary searching

    cout << endl << "masukkan data yang dicari: ";

    cin >> key;

    awal = 0;
    akhir = jumlah - 1;


    int cek = hasil(data, awal, akhir, key);
    if( cek != -1 ){
        cout << "data ditemukan pada index ke-" << cek << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }
    return 0;
}