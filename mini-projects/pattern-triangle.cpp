#include <iostream>
using namespace std;

int main()
{
    int nilai;
    cout << "Masukkan jumlah pola * : ";
    cin >> nilai;

    // pattern triangle 1.0
    cout << "Pattern ke 1.0" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // pattern triangle 1.1
    cout << "\nPattern ke 1.1" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = nilai; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern triangle 2.0
    cout << "\nPattern ke 2.0" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = nilai; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern triangle 2.1
    cout << "\nPattern triangle 2.1" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = nilai; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern triangle 3.0
    cout << "\nPattern triangle 3.0" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = nilai; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (i * 2 - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern triangle 3.1
    cout << "\nPattern triangle 3.1" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = nilai; k >= (i * 2 - nilai); k--)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern triangle 4.0
    cout << "\nPattern triangle 4.0" << endl;
    for (int i = 1; i <= nilai; i++)
    {
        for (int j = nilai; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= (i * 2 - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int l = 2; l <= nilai; l++)
    {
        for (int m = 1; m < l; m++)
        {
            cout << " ";
        }
        for (int n = nilai; n >= (l * 2 - nilai); n--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
