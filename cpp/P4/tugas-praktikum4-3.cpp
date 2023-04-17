#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << endl;
    cout << "Masukkan angka: ";
    cin >> score;

    for (int i = 0; i < score; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}