#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void While();
void do_While();
void for_Loop();
void nested_Loop();
void breakcontinue_Loop();
void codelab1();
void codelab2();

int main()
{
    While();
    // do_While();
    // for_Loop();
    // nested_Loop();
    // breakcontinue_Loop();
    // codelab1();
    // codelab2();
}

void While()
{
    int n;
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

void do_While()
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

void for_Loop()
{
    for (int i = 0; i <= 5; i++)
    {
        printf("Iterasi ke %d\n", i);
    }
}

void nested_Loop()
{
    int tinggi = 5;

    for (int baris = 1; baris <= tinggi; baris++)
    {
        for (int kolom = 1; kolom <= baris; kolom++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void breakcontinue_Loop()
{

    for (int i = 1; i <= 5; i++)
    {
        printf("%d ", i);
        if (i == 3)
        {
            break;
        }
    }
    printf("\n");

    for (int j = 1; j <= 5; j++)
    {
        if (j == 3)
        {
            continue;
        }
        printf("%d ", j);
    }
    printf("\n");
}

void codelab1()
{
    int n;
    int angka = 1;
    int jumlah = 0;

    printf("Masukkan angka N:");
    scanf("%d", &n);

    while (angka <= n)//awalan 1 <= nilai yang diinput(5) jadi pas 5 <= 5 while berhenti berulang
    {
        printf("%d\n", angka);// print angka 1 sampai 5
        jumlah += angka; 
        angka++;
    }

    

    printf("Jumlah i dari 1 hingga %d adalah %d\n", n, jumlah);
}

void codelab2()
{

    char kalimat[100];

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]s", kalimat);

    int banyakHuruf = strlen(kalimat);
    printf("banyak byte yang anda tulis: %d\n", banyakHuruf);

    printf("Karakter unik dari string: ");

    for (int i = 0; kalimat[i]; ++i)
    {

        int isUnique = true;
        for (int j = 0; j < i; ++j)
        {
            if (kalimat[i] == kalimat[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique != 1)
        {
            continue;
        }

        printf("%c ", kalimat[i]);
    }

    printf("\n");
}
