#include <stdio.h>

enum Film
{
    Unstoppable = 1,
    Insidious,
    Us
};

void conditions()
{
    printf("Masukan Nama Film: \n");
    printf("1. Unstoppable\n");
    printf("2. Isidiouse\n");
    printf("3. Us\n");
    printf("Pilihan anda : ");

    enum Film kategori;

    scanf("%i", &kategori);
    // switch case tidak harus 1 2 3, bisa pakai nama daftar enum
    switch (kategori)
    {
    case Unstoppable:
        printf("Film Action\n");
        break;
    case Insidious:
        printf("Film Horror\n");
        break;
    case Us:
        printf("Film Thriller\n");
        break;

    default:
        printf("\nnginput apa mas?\n");

        break;
    }
}

int main()
{
    conditions();
}