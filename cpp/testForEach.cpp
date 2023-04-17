#include <iostream>
#include <algorithm> //for_each;
#include <vector>

using namespace std;

void resultFunc(int x)
{
  cout << " " << x;
}

int main()
{
  vector<int> angka = {1};

  angka.push_back(10);
  angka.push_back(20);
  angka.push_back(30);
  angka.push_back(40);
  angka.push_back(50);

  cout << "Result For_Each: ";
  for_each(angka.begin(), angka.end(), resultFunc);

  return 0;
}