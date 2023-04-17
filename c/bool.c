#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  printf("Number: ");
  bool resultOne = true, resultTwo = false;
  int input;
  scanf("%d", &input);

  if (input > 0 || input < 0)
  {
    printf("Hasilnya: %d", resultOne);
  }
  else
  {
    printf("Hasilnya: %d", resultTwo);
  }

  return 0;
}