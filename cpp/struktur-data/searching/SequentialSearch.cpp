#include <iostream>
using namespace std;

int cekHasil (int *data, int jumlah, int key) {

        for (int a = 0 ; a < jumlah ; a++) {
        if (data[a] == key) {
            return a;
        }
    }
    return -1;

}

int main () {
    int jumlah, key;

    cout << "jumlah index: ";
    cin >> jumlah;
    cout << endl;

    int data[jumlah];

    for (int a = 0 ; a < jumlah ; a++) {
        cout << "nilai index ke-" << a << " : ";
        cin >> data[a];
    }
    cout << endl;

    cout << "data awal: ";
    for (int b = 0 ; b < jumlah ; b++) {
        cout << data[b] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Masukkan data yang ingin dicari: ";
    cin >> key;

    int cek = cekHasil(data, jumlah, key);
    if (cek != -1) {
        cout << "data anda ditemukan di index ke: " << cek;
    }

    else {
        cout << "gak ketemu hehe";
    }

    return 0;
}