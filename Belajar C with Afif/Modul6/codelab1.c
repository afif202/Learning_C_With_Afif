#include <stdio.h>

int formulaLuasVolumeBalok(int p, int l, int t, int *luas, int *volume);

int luasBalok(int p, int l, int t);

void volumeBalok(int p, int l, int t);

int main()
{
    int p, l, t, luas, volume;

    printf("Masukkan p balok (cm): ");
    scanf("%d", &p);

    printf("Masukkan l balok (cm): ");
    scanf("%d", &l);

    printf("Masukkan t balok (cm): ");
    scanf("%d", &t);

    formulaLuasVolumeBalok(p, l, t, &luas, &volume);

    // luasBalok(p, l, t);
    // printf("\nLuas balok: %d cm^2\n", luasBalok(p, l, t));

    // volumeBalok(p, l, t);

    printf("\nLuas balok: %d cm^2\n", luas);
    printf("Volume balok: %d cm^3\n", volume);
}

int formulaLuasVolumeBalok(int p, int l, int t, int *luas, int *volume)
{
    *luas = 2 * (p * l + p * t + t * l);
    *volume = p * l * t;

    return 0;
}

int luasBalok(int p, int l, int t)
{
    int luas = 2 * (p * l + p * t + t * l);

    return luas;
}

void volumeBalok(int p, int l, int t)
{
    int volume = p * l * t;

    printf("Volume balok: %d cm^3\n", volume);
}

// void formula();

// int main()
// {
//     printf("===KALKULATOR MENGHITUNG BALOK===");
//     formula();
// }

// void formula()
// {
//     int p, l, t;

//     printf("\nMasukkan p balok : ");
//     scanf("%d", &p);
//     printf("Masukkan l balok :");
//     scanf("%d", &l);
//     printf("Masukkan t balok :");
//     scanf("%d", &t);

//     int luasBalok = 2 * (p * l + p * t + t * l);

//     int volumeBalok = p * l * t;

//     printf("\nluas nya ini kuds: %d cm^2", luasBalok);
//     printf("\nvolume nya ini kids : %d cm^3", volumeBalok);
// }