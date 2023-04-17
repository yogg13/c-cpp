#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> test;

    test.push_front(10);
    test.push_back(9);

    cout << "Hasil 1: ";
    for (auto x : test)
    {
        cout << x << " ";
    }

    test.pop_back();
    cout << endl;

    cout << "Hasil 2: ";
    for (auto x : test)
    {
        cout << x << " ";
    }

    return 0;
}