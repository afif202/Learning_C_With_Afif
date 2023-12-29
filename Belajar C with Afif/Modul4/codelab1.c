#include <stdio.h>

int main()
{
    int n ;
    int angka = 1;
    int jumlah = 0;

    printf("Masukkan angka N:");
    scanf("%d", &n);

    while (angka <= n)
    {
        printf("%d\n", angka);
        jumlah += angka;
        angka++;
    }

    printf("Jumlah i dari 1 hingga %d adalah %d\n", n, jumlah);
}