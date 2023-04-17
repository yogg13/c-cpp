#include <iostream>

using namespace std;

int main()
{
    int nilai1[6] = {1, 3, 5, 7, 9, 11};
    int nilai2[6] = {2, 4, 6, 8, 10, 12};
    int result[6];

    for (int i = 0; i < 6; i++)
    {
        result[i] = nilai1[i] - nilai2[5 - i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Hasilnya: " << result[i] << " " << endl;
    }

    return 0;
}