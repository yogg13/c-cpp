#include <iostream>
#include <stack>

using namespace std;

int main()
{
  /*Member Function in Stack
  size(),
  push()-> jika Anda ingin menambahkan salinan instance kelas yang ada ke container, gunakan push,
  emplace()-> Jika Anda ingin membuat & menambahkan instance kelas baru, dari awal, gunakan emplace,
  pop(),
  top(),
  swap(),
  empty()
  */

  stack<int> angka1, angka2;

  cout << "variable angka1 NULL: " << angka1.size() << endl;
  cout << "variable angka2 NULL: " << angka2.size() << endl;
  cout << endl;

  for (int i = 1; i <= 5; i++)
  {
    angka1.push(i);
  }

  for (int j = 10; j <= 15; j++)
  {
    angka2.push(j);
  }

  angka1.swap(angka2);

  cout << "jumlah value angka1 setelah di Iterasi & di push(): " << angka1.size() << endl;
  angka1.pop();
  cout << endl;

  cout << "jumlah value setelah di pop(): " << angka1.size() << endl;
  cout << endl;

  cout << "setelah angka1 diswap angka2" << endl;
  while (!angka1.empty())
  {

    cout << "output with top(): " << angka1.top() << " " << endl;
    angka1.pop();
  }
  cout << endl;

  cout << "setelah angka2 diswap angka1" << endl;
  while (!angka2.empty())
  {
    cout << "output with top(): " << angka2.top() << " " << endl;
    angka2.pop();
  }

  return 0;
}