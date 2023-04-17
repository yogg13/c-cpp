#include <iostream>
using namespace std;

int main()
{
  // char pekerja, lulusanBaru;

  // cout << "Jawablah pertanyaan dibawah ini: " << endl;
  // cout << "Jawab dengan Y untuk Ya atau N untuk tidak" << endl;

  // cout << "Apakah anda pekerja? ";
  // cin >> pekerja;
  // cout << "Apakah anda sudah lulus sekolah? ";
  // cin >> lulusanBaru;

  // if (pekerja == 'Y' && lulusanBaru == 'Y')
  // {
  //   if (lulusanBaru == 'Y')
  //   {
  //     cout << "Kualitas anda spesial" << endl;
  //   }
  //   else
  //   {
  //     cout << "Anda harus lulus sekolah terlebih dahulu" << endl;
  //   }
  // }
  // else
  // {
  //   cout << "Anda harus menjadi pekerja yang berkualitas" << endl;
  // }

  char pekerja, lulusanBaru;

  cout << "Jawablah pertanyaan dibawah ini: " << endl;
  cout << "Jawab dengan Y untuk Ya atau N untuk tidak" << endl;

  cout << "Apakah anda pekerja? ";
  cin >> pekerja;
  cout << "Apakah anda sudah lulus sekolah? ";
  cin >> lulusanBaru;

  if (pekerja == 'Y' && lulusanBaru == 'Y')
  {
    cout << "Kualitas anda terbaik!" << endl;
  }
  else if (pekerja == 'Y' && lulusanBaru == 'N')
  {
    cout << "Anda harus lulus sekolah terlebih dahulu!" << endl;
  }
  else
  {
    cout << "Anda harus menjadi pekerja yang berkualitas" << endl;
  }

  return 0;
}
