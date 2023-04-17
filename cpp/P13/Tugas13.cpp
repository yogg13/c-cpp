#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

struct DataPassenger
{
    queue<string> name, from, destination, price;
};

int main()
{
    DataPassenger people1;
    string inputSTR;
    int inputINT;
    char select;

    do
    {
        cout << "\t === Pendafaran pesan tiket pesawat === \n\n";

        cout << "Nama = ";
        cin >> inputSTR;
        cout << endl;
        people1.name.push(inputSTR);

        cout << "Asal keberangkatan = ";
        cin >> inputSTR;
        cout << endl;
        people1.from.push(inputSTR);

        cout << "Tujuan keberangkatan = ";
        cin >> inputSTR;
        cout << endl;
        people1.destination.push(inputSTR);

        cout << "Umur = ";
        cin >> inputINT;
        if (inputINT >= 18)
        {
            people1.price.push("1.000.000");
        }
        else if (inputINT >= 10 && inputINT < 18)
        {
            people1.price.push("750.000");
        }
        else if (inputINT < 10)
        {
            people1.price.push("500.000");
        }
        else
        {
            people1.price.push("Not Found!");
        }
        cout << endl;
        cout << endl;

        cout << "Apakah Anda ingin daftar lagi? (pilih y / n) = ";
        cin >> select;
        // system("cls");
    } while (select == 'y' || select == 'Y');
    cout << endl;

    cout << "\t --- Data Penumpang --- \t\n\n";
    do
    {
        cout << "Nama: " << people1.name.front() << endl;
        people1.name.pop();

        cout << "Keberangkatan: " << people1.from.front();
        cout << " -> " << people1.destination.front() << endl;
        people1.from.pop();
        people1.destination.pop();

        cout << "Harga Tiket: " << people1.price.front() << endl;
        people1.price.pop();
        cout << endl;

    } while (!people1.name.empty() &&
             !people1.from.empty() &&
             !people1.destination.empty() &&
             !people1.price.empty()

    );

    return 0;
}