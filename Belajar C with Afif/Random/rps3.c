#include <stdio.h>
#define dollar_to_rupiah 15000
#define euro_to_rupiah 17000

void kurs()
{
    int rupiah;
    float dollar, euro;

    printf("Program Konversi Mata Uang\n");
    printf("===================\n");
    printf("Masukkan nominal dalam rupiah : ");
    scanf("%d", &rupiah);
    dollar = (float)rupiah / dollar_to_rupiah;
    euro = (float)rupiah / euro_to_rupiah;
    printf("%d rupiah = %.2f US Dollar\n", rupiah, dollar);
    printf("%d rupiah = %.2f Euro\n", rupiah, euro);
}

int main()
{
    printf("gacormas\n");
    kurs();
}

// #include <stdio.h>

// float bagi(int a, int b)
// {
//     float hasil = (float)a / (float)b;
// }

// int main()
// {
//     printf("Hasil 5/2: %.2f\n", bagi(5, 2));
// }