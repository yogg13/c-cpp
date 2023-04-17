#include <stdio.h>
#include <stdlib.h>

char outputName(char firstName[], char lastName[])
{
  return printf("Nama saya: %s %s", firstName, lastName);
}

int main()
{
  char namaAwal[20], namaAkhir[20];

  printf("Masukkan nama awal: ");
  gets(namaAwal);

  printf("Masukkan nama akhir: ");
  gets(namaAkhir);

  outputName(namaAwal, namaAkhir);

  return 0;
}
