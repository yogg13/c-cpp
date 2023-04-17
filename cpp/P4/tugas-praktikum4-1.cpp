#include <iostream>
using namespace std;

int main()
{
    int bilangan, prima;

    cout << endl;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;
    bool evaluasi = true;

    if (bilangan == 0 || bilangan == 1)
    {
        evaluasi = false;
    }
    else
    {
        for (prima = 2; prima <= bilangan / 2; prima++)
        {
            if (bilangan % prima == 0)
            {
                evaluasi = false;
                break;
            }
        }
    }

    if (evaluasi)
    {
        cout << endl;
        cout << bilangan << " Termasuk bilangan prima!";
    }
    else
    {
        cout << bilangan << " Tidak termasuk bilangan prima!";
    }

    return 0;
}