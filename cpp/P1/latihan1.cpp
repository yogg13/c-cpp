#include <iostream>
using namespace std;

int main()
{
  int jari_jari, diagram;
  float keliling, luas, pi;
  pi = 3.14;
  cout << "Masukkan jari-jari: ";
  cin >> jari_jari;
  cout << "Masukkan diagram: ";
  cin >> diagram;
  luas = pi * jari_jari * jari_jari;
  cout << "Luas lingkaran: " << luas << endl;
  keliling = 2 * pi * diagram;
  cout << "Keliling lingkaran: " << keliling;

  char inisial;
  string name;
  bool pilihan;
  pilihan = true;
  cout << "Masukkan inisial anda: ";
  cin >> inisial;
  cout << "Masukkan nama anda: ";
  cin >> name;
  cout << "\ninisial anda: " << inisial << endl;
  cout << "nama anda: " << name << endl;
  cout << "pilihan anda: " << pilihan;

  int a, b;

  cout << "Masukkan nilai a: ";
  cin >> a;
  cout << "Masukkan nilai b: ";
  cin >> b;

  cout << "\nNilai a: " << a << endl;
  cout << "Nilai b: " << b << endl;
  a += b;
  cout << "Hasil operasi += " << a << endl;

  cout << "\nNilai a: " << a << endl;
  cout << "Nilai b: " << b << endl;
  a -= b;
  cout << "Hasil operasi -= " << a << endl;

  cout << "\nNilai a: " << a << endl;
  cout << "Nilai b: " << b << endl;
  a *= b;
  cout << "Hasil operasi *= " << a << endl;

  cout << "\nNilai a: " << a << endl;
  cout << "Nilai b: " << b << endl;
  a /= b;
  cout << "Hasil operasi /= " << a << endl;

  return 0;
}