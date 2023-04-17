#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 5> myArr = {5, 2, 7, 10, 3};

    sort(myArr.begin(), myArr.end());

    for (auto it : myArr)
    {
        cout << " " << it;
    }
    return 0;
}