#include <iostream>
#include <math.h>
// #include <string>
using namespace std;

int main()
{
    // int count;
    // for (count = 0; count < 5; count++)
    // {
    //     cout << count << " " << count * count << endl;
    // }

    // string name = "Telkom";
    // char pilih;
    // do
    // {
    //     cout << name << endl;
    //     cout << "Repeat? (y/n)";
    //     cin >> pilih;
    // } while (pilih == 'y');

    // int x, S;
    // S = 0;
    // x = -1;
    // do
    // {
    //     S = (S + 1) / x;
    //     cout << "S = " << S << endl;
    //     cout << "x = " << x << endl;
    // } while (x != -1);

    int number, counter, result;

    while (number > 0 && counter > 0)
    {
        cout << "---------------" << endl;
        cout << "Masukkan angka: ";
        cin >> number;

        cout << "Masukkan angka pencacah: ";
        cin >> counter;

        result = pow(number, counter);
        cout << "Hasilnya yaitu: " << result << endl;
        // }

        return 0;
    }