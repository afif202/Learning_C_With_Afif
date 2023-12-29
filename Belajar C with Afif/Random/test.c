#include <stdio.h>
#include <stdlib.h>

struct data_mahasiswa {
  char nama[50];
  char nim[15];
  char program_studi[30];
};

int main() {
  struct data_mahasiswa mahasiswa[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("Data mahasiswa ke-%d\n", i + 1);

    printf("Masukkan nama: ");
    scanf("%s", mahasiswa[i].nama);

    printf("Masukkan NIM: ");
    scanf("%s", mahasiswa[i].nim);

    printf("Masukkan program studi: ");
    scanf("%s", mahasiswa[i].program_studi);
  }

  FILE *fp;
  fp = fopen("data_mahasiswa.txt", "w");

  for (i = 0; i < 3; i++) {
    fprintf(fp, "Nama :%s\nNim:%s\nProgram Studi:%s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].program_studi);
  }

  fclose(fp);

  fp = fopen("data_mahasiswa.txt", "r");

  for (i = 0; i < 3; i++) {
    fscanf(fp, "Nama :%s\nNim:%s\nProgram Studi:%s\n", mahasiswa[i].nama, mahasiswa[i].nim, mahasiswa[i].program_studi);
  }

  fclose(fp);

  return 0;
}