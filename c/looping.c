#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("input size(Maks 10) : ");
  int size;
  scanf("%d", &size);

  for (int x = 0; x <= size; x++)
  {
    for (int y = 0; y <= size; y++)
    {
      if (x == 0 || y == 0)
      {
        printf("*");
      }
      else if (x == 2 || y == 2)
      {
        printf("*");
      }
      else if (x == 4 || y == 4)
      {
        printf("*");
      }
      else if (x == 6 || y == 6)
      {
        printf("*");
      }
      else if (x == 8 || y == 8)
      {
        printf("*");
      }
      else if (x == 10 || y == 10)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}