#include <stdbool.h>
#include <string.h>
#include <stdio.h>
// codelab2 Modul 2
int main()
{
    // Boolean
    bool isTrue = true;
    bool isFalse = false;
    printf("Boolean values:\n");
    printf("isTrue: %d\n", isTrue);   // true = 1
    printf("isFalse: %d\n", isFalse); // false = 0
    // Strings
    char str1[] = "Hello";
    char str2[10];
    strcpy(str2, str1); // strcpy salin str 1 menjadi str 2
    printf("\nStrings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2); // jadi hello karena nyalin str1
    // Pointers
    int num = 42;
    int *ptr = &num;
    printf("\nPointers:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);       // alamat memori num
    printf("Value of ptr: %p \n", ptr);         // memiliki alamat yang sama dengan num karena ptr = num
    printf("Value pointed by ptr: %d\n", *ptr); // *ptr= num = 42
    return 0;
}