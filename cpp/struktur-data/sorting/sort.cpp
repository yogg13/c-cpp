#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    array<int, 6> angka = {3, 1, 7, 5, 9, 6};

    for (auto angkaArr : angka)
    {
        cout << angkaArr << " ";
    }
    cout << endl;
    cout << endl;

    sort(angka.begin(), angka.end());

    for (auto angkaArr : angka)
    {
        cout << angkaArr << " ";
    }

    return 0;
}