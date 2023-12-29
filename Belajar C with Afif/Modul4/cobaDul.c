#include <stdio.h>

int main()
{
    int angka = 1;
    int n;
    int jumlah = 0;

    printf("Masukkan angka N:");
    scanf("%d", &n);

    do
    {
        printf("%d\n", angka);
        jumlah += angka;
        angka++;
    } while (angka <= n);

    printf("Jumlah angka dari 1 hingga %d adalah %d\n", n, jumlah);
}