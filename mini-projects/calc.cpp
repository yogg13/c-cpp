#include <iostream>
using namespace std;

int main()
{
    float x, y, result;
    char aritmatika;

    cout << "Calculator mini project in C++\n\n";

/* Disinilah expressionnya berada sebagai titik awal program akan
dijalankan kembali dengan menggunakan statement goto;*/
start:
    // Proses inputan;
    cout << "Masukkan nilai pertama: ";
    cin >> x;
    cout << "Pilih jenis operatornya +, -, /, *: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> y;

    /*Menggunakan pengkondisian switch case*/
    // Proses perhitungan;
    //  switch (aritmatika)
    //  {
    //  case '+':
    //      result = x + y;
    //      break;
    //  case '-':
    //      result = x - y;
    //      break;
    //  case '/':
    //      result = x / y;
    //      break;
    //  case '*':
    //      result = x * y;
    //      break;
    //  default:
    //      cout << "Input yang anda masukkan tidak ada!";
    //  }

    /*Menggunakan pengkondisian if else*/
    if (aritmatika == '+')
    {
        result = x + y;
    }
    else if (aritmatika == '-')
    {
        result = x - y;
    }
    else if (aritmatika == '/')
    {
        result = x / y;
    }
    else if (aritmatika == '*')
    {
        result = x * y;
    }
    else
    {
        cout << "Input yang Anda masukkan tidak ada!";
    }

    // Menampilkan hasil dari perhitungan;
    cout << "\nHasil perhitungan: ";
    cout << x << " " << aritmatika << " " << y;
    cout << " = " << result << "\n\n";

    /*statement goto berfungsi untuk melakukan repeat ke program awal
    setelah program sebelumnya berhasil dijalankan, kemudian inisialisasikan suatu expression
    sebagai tanda titik awal suatu program akan di jalankan kembali secara otomatis,
    contohnya saya menggunakan expression "start:" sebagai tanda titik awalnya nanti;*/
    goto start;
    return 0;
}