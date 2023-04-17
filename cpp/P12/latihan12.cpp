#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int a = 5;

    cout << "value a: " << a;
    cout << endl;

    ptr = &a;
    cout << "value ptr sebelum diubah: " << *ptr << endl;

    *ptr = 7;

    cout << endl;
    cout << "value ptr setelah diubah: " << *ptr << endl;
    cout << "new value a: " << a << endl;

    return 0;
}