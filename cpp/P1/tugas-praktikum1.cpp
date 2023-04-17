#include <iostream>
using namespace std;

int main()
{
  // Menghitung luas segitiga;
  // Luas = 0.5 * alas * tinggi;
  int alasSegitiga, tinggiSegitiga;
  float luasSegitiga;

  cout << "Menghitung luas segitiga" << endl;
  cout << "Masukkan nilai alas segitiga: ";
  cin >> alasSegitiga;

  cout << "Masukkan nilai tinggi segitiga: ";
  cin >> tinggiSegitiga;

  luasSegitiga = 0.5 * alasSegitiga * tinggiSegitiga;
  cout << "Luas segitiga adalah: " << luasSegitiga;
  cout << "\n---------------\n";

  // Menghitung keliling segitiga;
  // Keliling = a + b + c;
  int nilaiSatu, nilaiDua, nilaiTiga;
  float kelilingSegitiga;

  cout << "Menghitung keliling segitiga" << endl;
  cout << "Masukkan nilai satu: ";
  cin >> nilaiSatu;

  cout << "Masukkan nilai dua: ";
  cin >> nilaiDua;

  cout << "Masukkan nilai tiga: ";
  cin >> nilaiTiga;

  kelilingSegitiga = nilaiSatu + nilaiDua + nilaiTiga;
  cout << "Keliling segitiga adalah: " << kelilingSegitiga;
  cout << "\n---------------\n";

  // Menghitung luas trapesium
  // L = 0.5 * t  * (a + b)
  int atasTrapesium, bawahTrapesium, tinggiTrapesium;
  float luasTrapesium;

  cout << "Menghitung luas trapesium" << endl;
  cout << "Masukkan nilai atas trapesium: ";
  cin >> atasTrapesium;

  cout << "Masukkan nilai bawah trapesium: ";
  cin >> bawahTrapesium;

  cout << "Masukkan nilai tinggi trapesium: ";
  cin >> tinggiTrapesium;

  luasTrapesium = 0.5 * tinggiTrapesium * (atasTrapesium + bawahTrapesium);
  cout << "Luas trapesium adalah: " << luasTrapesium;
  cout << "\n---------------\n";

  // Menghitung keliling trapesium;
  // Keliling = a + b + c + d;
  int nilai_A, nilai_B, nilai_C, nilai_D;
  float kelilingTrapesium;

  cout << "Menghitung keliling trapesium" << endl;
  cout << "Masukkan nilai A: ";
  cin >> nilai_A;

  cout << "Masukkan nilai B: ";
  cin >> nilai_B;

  cout << "Masukkan nilai C: ";
  cin >> nilai_C;

  cout << "Masukkan nilai D: ";
  cin >> nilai_D;

  kelilingTrapesium = nilai_A + nilai_B + nilai_C + nilai_D;
  cout << "Keliling trapesium adalah: " << kelilingTrapesium;
  cout << "\n---------------\n";

  return 0;
}
