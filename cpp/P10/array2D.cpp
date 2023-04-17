#include <iostream>

using namespace std;

int main()
{
  int angka[3][4] =
      {
          {1, 2, 3, 4},
          {5, 6, 7, 8},
          {9, 10, 11, 12}

      };

  cout << "Result: " << angka[1][0] << endl;

  return 0;
}