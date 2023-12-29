#include <stdio.h>

enum Makanan
{
    Nasi_Goreng = 1,
    Mie_Goreng,
    Ayam_Goreng,
    Bakso,
    Ketan
};

enum Minuman
{
    Air_Mineral = 1,
    Es_Teh,
    Es_Jeruk,
    Jus_Alpukat,
    Jus_Apel,

};

int main()
{
    int hargaMakanan, hargaMinuman, pembayaran;
    float diskon = 0.9;
    char member;

    printf(" \n===== Rumah Makan ===== \n");

    printf("Menu Makanan: \n");
    printf("1. Nasi_Goreng Rp. 50.000\n");
    printf("2. Mie_Goreng Rp. 45.000\n");
    printf("3. Ayam_Goreng Rp. 65.000\n");
    printf("4. Bakso Rp. 20.000\n");
    printf("5. Ketan Rp. 15.000\n");

    enum Makanan pilihanMakan;

    printf("Pilih menu makanan(1-5): ");
    scanf("%d", &pilihanMakan);

    switch (pilihanMakan)
    {
    case Nasi_Goreng:
        hargaMakanan = 50000;
        break;
    case Mie_Goreng:
        hargaMakanan = 45000;
        break;
    case Ayam_Goreng:
        hargaMakanan = 65000;
        break;
    case Bakso:
        hargaMakanan = 20000;
        break;
    case Ketan:
        hargaMakanan = 15000;
        break;
    default:
        printf("\nMohon maaf Menu tidak tersedia\n");
        break;
    }

    printf("\nharga makanan mu %d\n", hargaMakanan);

    printf("Menu Minuman: \n");
    printf("1. Air Mineral Rp. 13.000\n");
    printf("2. Es Teh Rp. 15.000\n");
    printf("3. Es Jeruk Rp. 20.000\n");
    printf("4. Jus Alpukat Rp. 25.000\n");
    printf("5. Jus Apel Rp. 25.000\n");

    enum Minuman pilihanMinum;

    printf("Pilih menu makanan(1-5): ");
    scanf("%d", &pilihanMinum);

    switch (pilihanMinum)
    {
    case Air_Mineral:
        hargaMinuman = 13000;
        break;
    case Es_Teh:
        hargaMinuman = 15000;
        break;
    case Es_Jeruk:
        hargaMinuman = 20000;
        break;
    case Jus_Alpukat:
        hargaMinuman = 25000;
        break;
    case Jus_Apel:
        hargaMinuman = 25000;
        break;
    default:
        printf("\nMohon maaf Menu tidak tersedia\n");
        break;
    }

    float totalHarga = hargaMakanan + hargaMinuman;

    printf("\nLu olang Member ha? (Y/N): ");
    scanf(" %c", &member);

    if (member == 'Y' || member == 'y')
    {
        totalHarga *= diskon;
    }
    else if (member == 'N' || member == 'n')
    {
        printf("dapatkan diskon 10 persen hanya dengan mendaftar member\n");
        printf("tertarik mendaftar member? (Y/N): ");
        scanf(" %c", &member);

        if (member == 'Y' || member == 'y')
        {
            totalHarga *= diskon;
            printf("selamat berhasil mendaftar member");
        }
    }

    printf("\nTotal harga  = Rp. %.2f\n", totalHarga);

    printf("Alamat Memori Variabel total : %p\n", &totalHarga);

    printf("Masukkan uang pembayaran : ");
    scanf("%d", &pembayaran);

    float kembalian = pembayaran - totalHarga;

    if (kembalian > 0)
    {
        printf("Kembalian anda : Rp. %.2f\n", kembalian);
    }
    else if (kembalian < 0)
    {
        printf("Mohon maaf kak , uang nya kurang : Rp. %.2f\n", kembalian);
    }
    else if (kembalian == 0)
    {
        printf("Terima Kasih kak , silahkan ditunggu\n");
    }
}
