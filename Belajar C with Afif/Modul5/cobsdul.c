#include <stdio.h>
// #define p  5
// #define l  10

void arrbiasa();
void arrloop();
void arryptr();

int main()
{
    arrbiasa();
    // arrloop();
    // arryptr();
}

void arrbiasa()
{

    char arr[6] = {'G', 'e', 'k', 'k', 'o', '\0'};

    printf("\nmenjadi kalimat  : %s\n", arr);
    printf("Huruf ke 2 nya adalah : %c\n", arr[1]);

    arr[1] = 'a';
    printf("\nmenjadi kalimat  : %s\n", arr);
}

void arrloop()
{
    int angka[5] = {10, 20, 30, 40, 50};

    printf("elemen ke  : %d\n", angka[3]);

    for (int i = 0; i < 5; i++)
    {
        printf("elemen ke %d : %d\n", i, angka[i]);
    }
};
void arryptr()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("value of numbers[0]: %d\n", numbers[0]);
    printf("value of *numbers: %d\n", *numbers);

    int *ptr = numbers;

    printf("Value of *ptr     : %d\n", *ptr);
    printf("Value of *(ptr+1) : %d\n", *(ptr + 1));
    printf("Value of *(ptr+2) : %d\n", *(ptr + 2));
}

// char arr[p][l] ={
//     {"neon"},
//     {"gekko"},
//     {"omen"},
//     {"sage"},
//     {"jett"},
//     };
// strcpy(arr[3], "kage");
// for (int i= 1 ; i <5; i++){
//     printf("Agent ke %d: %s\n", i, arr[p][l]);
// }