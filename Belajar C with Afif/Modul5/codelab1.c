
#include <stdio.h>
#include <string.h>

#define p 5
#define l 10

int main()
{

    char arr[p][l] = {
        "neon",
        "gekko",
        "omen",
        "sage",
        "jett",
    };

    for (int i = 0; i < p; i++)
    {
        printf("Agent ke %d: %s\n", i + 1, arr[i]);
    }

    printf("\nDaftar Agen setelah perubahan\n");

    strncpy(arr[3], "kage",p);

    for (int i = 0; i < p; i++)
    {
        printf("Agent ke %d: %s\n", i + 1, arr[i]);
    }
}