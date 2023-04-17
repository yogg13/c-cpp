#include <iostream>
#include <queue>

using namespace std;

int main()
{
  /* Member Function in queue
  size(),
  push()-> jika Anda ingin menambahkan salinan instance kelas yang ada ke container, gunakan push,
  emplace()-> Jika Anda ingin membuat instance kelas baru, dari awal, gunakan emplace,
  pop(),
  front(),
  back(),
  swap(),
  empty().
  */

  queue<int> angka1, angka2;
  int sum = 0;

  for (int i = 0; i <= 10; i++)
  {
    angka1.push(i);
  }
  cout << "size angka1: " << angka1.size() << endl;

  for (int i = 11; i <= 20; i++)
  {
    angka2.push(i);
  }
  cout << "size angka2: " << angka2.size() << endl;

  cout << endl;
  angka1.swap(angka2);
  cout << "size angka1: " << angka1.size() << endl;
  cout << "size angka2: " << angka2.size() << endl;

  while (!angka1.empty())
  {
    sum += angka1.front();
    angka1.pop();
  }

  cout << endl;
  cout << "total angka1 with front(): " << sum << '\n';

  return 0;
}