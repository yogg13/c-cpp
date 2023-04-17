#include <iostream>
using namespace std;

int bulat = 100;
float pecahan = 27.5;

void Inisialisasi(int i, float f)
{
    i = i;
    f = f;
    cout << "Nilai Bilangan Bulat awal : " << i << endl;
    cout << "Nilai Pecahan awal : " << f << endl;
    cout << endl;
}

void ChangeThem(int i, float f)
{
    i = i;
    f = f;
    cout << "Nilai BIlangan Bulat diganti : " << i << endl;
    cout << "Nilai Pecahan diganti : " << f << endl;
    cout << endl;
}

int main()
{
    Inisialisasi(10, 94.2);
    ChangeThem(bulat, pecahan);
    cout << "Nilai Bilangan Bulat akhir : " << bulat << endl;
    cout << "Nilai Pecahan akhir : " << pecahan << endl;
    return 0;
}
