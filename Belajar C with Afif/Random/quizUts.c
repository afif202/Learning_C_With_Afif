#include <stdio.h>
#include <stdbool.h>

void sewaLahan();
bool isGanjil(int i); // ini salah bjir
void sksProgram();

int main()
{
    // sewaLahan();
    isGanjil(11);
    // sksProgram();
}

// 1
void sewaLahan()
{
    int sewa = 25000;
    int lama;
    const float asuransi = 0.11;

    printf("Lama Sewa : ");
    scanf("%d", &lama);

    float totalBiaya = sewa * lama; // pake float cuma biar pembulatan nya bagus

    printf("Total biaya sebelum asuransi pak : %.0f\n", totalBiaya);

    totalBiaya *= asuransi;
    // totalBiaya X 1.05
    // contoh 50000 X 1.05

    printf("Total biaya dikenakan 5 persen asunrasi ya pak: %.0f\n", totalBiaya); //.0f = tidak ada desimal walaupun float(jadi bilagan bulat)
}

// 2
bool isGanjil(int i)
{
    // yang ini salah guys ga gini maksudnya
    if (i % 2 == 1)
    {
        printf("bilangan mu ganjil bro = %i \n", i);
        return printf("%d", true); // menggembalikan nilai true = 1
    }
    else
    {
        printf("bilangan mu genap bro = %d \n", i);
        return printf("%d", false); // menggembalikan nilai false = 0
    }
}

// 3
void sksProgram()
{
    char nama[100]; // harus dikasih ukuran ternyata(angka 100 itu ukuran byte) , ga bisa unlimited string
    char nim[16];   // nim kan cuma 15 kita tambahin 1 buat null type(default nya kayak gitu)
    float ips;
    int sks;

    printf("Masukkan Nama mu kawan: "); // nama nya belum bisa dikasih spasi ya jadi Afif Amhar ga bisa, Bisanya Afif_Amhar
    scanf(" %s", nama);                 // kalo string ga perlu &

    printf("Masukkan NIM mu kawan: ");
    scanf(" %s", nim); // buat better compile kasih spasi 1x sebelum %(ngurangin error)tergantung compiler juga si

    printf("Masukkan Indeks Prestasi Semester: ");
    scanf(" %f", &ips); // scanf yang pakai '&' jangan lupa

    if (ips >= 0 && ips <= 4.0) // yang ini buat rentang ips 0 - 4.0
    {
        if (ips > 3.5)
        {
            sks = 24;
        }
        else if (ips >= 2.75)
        {
            sks = 22;
        }
        else if (ips < 2.75)
        {
            sks = 18;
        }
    }
    else // kalo kurang dari 0  atau ips lebih dari 4.0 print yang ini
    {
        sks = 0;
        printf("\nIPS mu overload mas %s", nama);
    }

    printf("\nMahasiswa %s dengan NIM %s dapat menggambil %d Sks\n", nama, nim, sks);
}
