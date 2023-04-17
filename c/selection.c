#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c;

  printf("Masukkan 1 angka: ");
  scanf("%d", &a);

  printf("Masukkan dua angka: ");
  scanf("%d %d", &b, &c);

  if (a >= b && a <= c)
  {
    printf("%d diantara variabel %d dan %d", a, b, c);
  }
  else
  {
    printf(" %d bukan diantara variabel %d dan %d", a, b, c);
  }

  return 0;
}