#include <iostream>

using namespace std;

int main()
{
    int nilai, f_n, f_n1, f_n2;

    cout << "Latihan deret fibonacci" << endl;
    cout << "Masukkan nilai ke-n: ";
    cin >> nilai;

    f_n1 = 0;
    f_n2 = 1;
    cout << f_n1 << " ";
    cout << f_n2 << " " << endl;

    for (int i = 0; i < nilai; i++)
    {
        f_n = f_n1 + f_n2;
        f_n1 = f_n2;
        f_n2 = f_n;

        cout << f_n << " ";
    }

    return 0;
}