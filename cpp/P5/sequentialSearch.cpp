#include <iostream>
using namespace std;

int cari(int data[], int panjang, int x)
{
    for (int index = 0; index < panjang; index++)
        if (data[index] == x)
            return index;
    return -1;
}

int main()
{
    int data[] = {2, 4, 0, 1, 9, 3};
    int x = 3;
    int panjang = sizeof(data) / sizeof(data[0]);

    int hasil = cari(data, panjang, x);

    if (hasil == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << hasil;
    }
}