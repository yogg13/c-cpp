#include <iostream>
using namespace std;

int main()
{
  int bulan;
  char tahun;

  cout << "Masukkan nomor urut bulan: ";
  cin >> bulan;

  if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12)
  {
    cout << "Jumlah hari = 31";
  }
  else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11)
  {
    cout << "Jumlah hari = 30";
  }
  else if (bulan == 2)
  {
    cout << "Tahun kabisat? (y/n): ";
    cin >> tahun;
    if (tahun == 'y')
    {
      cout << "Jumlah hari = 29" << endl;
    }
    else
    {
      cout << "Not found!" << endl;
    }
  }
  else
  {
    cout << "Nomor bulan yang anda masukkan tidak ada!";
  }
  return 0;
}
