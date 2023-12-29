#include <stdio.h>

int main()
{
    int age = 20;

    // If Else biasa
    if (age == 10)
    {
        printf("Umur Tidak Valid\n");
    }
    else
    {
        printf("Umur Valid");
    }

    if (age == 10)
    {
        printf("Umur Tidak Valid\n");
    }
    else if (age)
    {
        printf("Umur Valid");
    }
    else
    {
        printf("iyah kamu berumur");
    }
}