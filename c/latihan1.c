#include <stdio.h>
#include <stdlib.h>

int main()
{
  char id[20];
  printf("Masukkan NIM: ");
  scanf("%s", id);
  printf("\n");
  getchar();

  char name[20];
  printf("Masukkan Nama: ");
  scanf("%s", name);
  printf("\n");
  getchar();

  char prodi[20];
  printf("Masukkan Prodi: ");
  scanf("%s", prodi);
  printf("\n");
  getchar();

  char email[50];
  printf("Masukkan Email: ");
  scanf("%s", email);
  printf("\n");
  getchar();

  char gender[20];
  printf("Masukkan Jenis Kelamin: ");
  scanf("%s", gender);
  printf("\n");
  getchar();

  float ipk;
  printf("Masukkan IPK: ");
  scanf("%f", &ipk);
  printf("\n");
  printf("\n");

  printf("ID: %s\n", id);
  printf("Name: %s\n", name);
  printf("Prodi: %s\n", prodi);
  printf("Email: %s\n", email);
  printf("Gender: %s\n", gender);
  printf("IPK: %.2f\n", ipk);

  return 0;
}