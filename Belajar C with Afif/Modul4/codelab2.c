#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char kalimat[100];

    printf("Masukkan sebuah string: ");
    scanf("%[^\n]s", kalimat);

    int banyakHuruf = strlen(kalimat);
    printf("banyak char yang anda tulis: %d\n", banyakHuruf);

    printf("Karakter unik dari string: ");

    for (int i = 0; kalimat[i]; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < i; j++)
        {
            if (kalimat[i] == kalimat[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique != true)
        {
            continue;
        }

        printf("%c ", kalimat[i]);
    }

    printf("\n");
}