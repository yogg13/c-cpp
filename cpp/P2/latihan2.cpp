#include <iostream>
using namespace std;

// int main()
// {
//   int total, nominal, bonusPulsa, bonusSMS;

//   cout << "Isi pulsa anda: ";
//   cin >> nominal;

//   if (nominal >= 100000)
//   {
//     bonusPulsa = 10000;
//     bonusSMS = 150;
//   }
//   else if (nominal >= 50000)
//   {
//     bonusPulsa = 5000;
//     bonusSMS = 100;
//   }
//   else if (nominal >= 25000)
//   {
//     bonusPulsa = 1000;
//     bonusSMS = 50;
//   }
//   else
//   {
//     bonusPulsa = 0;
//     bonusSMS = 0;
//   }

//   total = nominal + bonusPulsa;
//   cout << "Pulsa anda: " << total << endl;
//   cout << "Bonus SMS anda: " << bonusSMS;

//   return 0;
// }

int main()
{
  int oprs1, oprs2, hasil, operasi;

  cout << "1. Proses Penjumlahan" << endl;
  cout << "2. Proses Perkurangan" << endl;
  cout << "3. Proses Perkalian" << endl;
  cout << "4. Proses Pembagian" << endl;
  cout << "Pilih Nomor Operasi: ";
  cin >> operasi;

  switch (operasi)
  {
  case 1:
    cout << "\nProses penjumlahan +" << endl;
    cout << "Input angka pertama: ";
    cin >> oprs1;
    cout << "Input angka kedua: ";
    cin >> oprs2;
    hasil = oprs1 + oprs2;
    cout << "\nHasil penjumlahan: " << hasil << endl;
    break;

  case 2:
    cout << "\nProses pengurangan -" << endl;
    cout << "Input angka pertama: ";
    cin >> oprs1;
    cout << "Input angka kedua: ";
    cin >> oprs2;
    hasil = oprs1 - oprs2;
    cout << "\nHasil Pengurangan: " << hasil << endl;
    break;

  case 3:
    cout << "\nProses perkalian *" << endl;
    cout << "Input angka pertama: ";
    cin >> oprs1;
    cout << "Input angka kedua: ";
    cin >> oprs2;
    hasil = oprs1 * oprs2;
    cout << "\nHasil Perkalian: " << hasil << endl;
    break;

  case 4:
    cout << "\nProses pembagian /" << endl;
    cout << "Input angka pertama: ";
    cin >> oprs1;
    cout << "Input angka kedua: ";
    cin >> oprs2;
    hasil = oprs1 / oprs2;
    cout << "\nHasil Pembagian: " << hasil << endl;
    break;

  default:
    cout << "\nNomor operasi tidak ditemukan" << endl;
    break;
  }

  return 0;
}