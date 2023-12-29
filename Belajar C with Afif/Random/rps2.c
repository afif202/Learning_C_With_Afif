#include <stdio.h>

float convert(float jam, int i)
{
    if (i == 1)
        return (jam * 60);
    else if (i == 2)
        return (jam / 24);
    else
        return (jam / 24 / 7);
}

int main()
{
    float jam, menit, hari, minggu;
    printf("Program Konversi Waktu\n");
    printf("====================\n");
    printf("Masukkan waktu dalam jam : ");
    scanf("%f", &jam);
    menit = convert(jam, 1);
    hari = convert(jam, 2);
    minggu = convert(jam, 3);
    printf("%.2f jam = %.2f menit\n", jam, menit);
    printf("%.2f jam = %.2f hari\n", jam, hari);
    printf("%.2f jam = %.2f minggu", jam, minggu);
    return (0);
}
