#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char yourName[100];

    printf("Masukkan nama Anda: ");
    scanf("%[^\n]", yourName);
    getchar();

    printf("Nama: %s", strupr(yourName)); // untuk ke lower case menggunakan => strlwr()

    return 0;
}