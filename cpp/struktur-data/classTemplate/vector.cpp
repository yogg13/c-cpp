#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> myString;

    string inputSTR, pilih;

    do
    {
        cout << "Masukkan kalimat: ";
        cin >> inputSTR;
        myString.insert(myString.begin(), inputSTR);

        cout << "Input Lagi? (y / n): ";
        cin >> pilih;
    } while (pilih == "y" || pilih == "Y");

    for (auto x : myString)
    {
        cout << x << " ";
    }

    return 0;
}