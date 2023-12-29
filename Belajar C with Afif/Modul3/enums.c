
#include <stdio.h>

// Enum anggota percobaan 1
enum Anggota
{
    Afif,   // Nilai Default 0
    Ardiee, // Nilai Default 1
    Alfian, // Nilai Default 2
    Angga,  // Nilai Default 3
    Fulan   // Nilai Default 4
};

void anggotaFav()
{
    enum Anggota terfavorit = Fulan;
    printf("\nMember favorit saya adalah %d \n", terfavorit);
    printf("\f");
    // keluarin nilai tanpa printf
}

// Enum bulan percobaan 2 menggunakan if else
enum Bulan
{
    January,
    February,
    March,
    April,
    May,
    June,
    july,
    August,
    September,
    October,
    November,
    December
};

void enumIf_else()
{
    enum Bulan bulan_ini = October;

    if (bulan_ini == October)
    {
        printf("\nMaka sebentar lagi kita UTS\n");
        printf("\f");
    }
    else
    {
        printf("Nugas dulu ga sih\n");
    }
}

// enum Murid percobaan 3 menggunakan SwitchCase
enum Murid
{
    Dzauqi = 1,
    Enno = 2,
    Ferdie,
    Wahyu,
    Dino
};

void enumSwitch()
{

    enum Murid nickname;
    nickname = Enno;
    switch (nickname)
    {

    case 1:
        printf("king dzauqi");
        break;
    case 2:
        printf("\nStarBoy\n");
        break;
    case 3:
        printf("Absen 1");
        break;
    case 4:
        printf("untitle");
        break;
    default:
        printf("Siapa?");
    }
    printf(".\n");
}

int main()
{
    // anggotaFav();
    // enumIf_else();
    enumSwitch();
    return 0;
}