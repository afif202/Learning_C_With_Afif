#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_BOOKS 100

// Struktur untuk menyimpan informasi buku
struct Book {
    int id;
    char title[100];
    char author[100];
    int pages;
    char genre[50];
};

// Deklarasi fungsi
void displayMenu();
void createNewBook(struct Book books[], int *bookCount);
void displayListOfBooks(struct Book books[], int bookCount);
void updateBookInformation(struct Book books[], int bookCount);
void deleteBook(struct Book books[], int *bookCount);
int isDuplicateID(struct Book books[], int bookCount, int newID);
void saveBooksToFile(struct Book books[], int bookCount);
void loadBooksFromFile(struct Book books[], int *bookCount);

int main() {
    struct Book books[MAX_BOOKS];
    int bookCount = 0;
    
    printf("Selamat datang di program CRUD Library Books!\n");
    printf("Program ini digunakan untuk manajemen informasi buku.\n");


    int choice;
    do {
        displayMenu();
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createNewBook(books, &bookCount);
                break;
            case 2:
                displayListOfBooks(books, bookCount);
                break;
            case 3:
                updateBookInformation(books, bookCount);
                break;
            case 4:
                deleteBook(books, &bookCount);
                break;
            case 5:
                saveBooksToFile(books, bookCount);
                printf("Terima kasih! Program akan keluar.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 5);

    return 0;
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Create New Book\n");
    printf("2. Display List of Books\n");
    printf("3. Update Book Information\n");
    printf("4. Delete Book\n");
    printf("5. Exit\n");
}

void createNewBook(struct Book books[], int *bookCount) {
    if (*bookCount >= MAX_BOOKS) {
        printf("Maaf, kapasitas maksimal buku telah tercapai.\n");
        return;
    }

    struct Book newBook;

    printf("ID Buku: ");
    scanf("%d", &newBook.id);

    if (isDuplicateID(books, *bookCount, newBook.id)) {
        printf("ID SUDAH TERDAFTAR. Masukkan ID buku yang berbeda.\n");
        return;
    }

    printf("Judul Buku: ");
    scanf(" %[^\n]s", newBook.title);

    printf("Nama Author: ");
    scanf(" %[^\n]s", newBook.author);

    printf("Jumlah Halaman: ");
    scanf("%d", &newBook.pages);

    printf("Genre Buku: ");
    scanf(" %[^\n]s", newBook.genre);

    books[*bookCount] = newBook;
    (*bookCount)++;

    printf("Buku berhasil ditambahkan!\n");
}

int i;
void displayListOfBooks(struct Book books[], int bookCount) {
    if (bookCount == 0) {
        printf("Belum ada buku yang terdaftar.\n");
        return;
    }

    printf("\nList of Books:\n");
    printf("-------------------------------------------------\n");
    printf("| %-4s | %-30s | %-20s | %-6s | %-15s |\n", "ID", "Judul Buku", "Author", "Halaman", "Genre");
    printf("-------------------------------------------------\n");

    for (i = 0; i < bookCount; i++) {
        printf("| %-4d | %-30s | %-20s | %-6d | %-15s |\n", books[i].id, books[i].title, books[i].author, books[i].pages, books[i].genre);
    }

    printf("-------------------------------------------------\n");
}

void updateBookInformation(struct Book books[], int bookCount) {
    int targetID;
    printf("Masukkan ID buku yang ingin diupdate: ");
    scanf("%d", &targetID);

    int foundIndex = -1;
    for (i = 0; i < bookCount; i++) {
        if (books[i].id == targetID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("Buku dengan ID %d tidak ditemukan.\n", targetID);
        return;
    }

    printf("Masukkan data baru untuk buku dengan ID %d:\n", targetID);
    printf("Judul Buku: ");
    scanf(" %[^\n]s", books[foundIndex].title);

    printf("Nama Author: ");
    scanf(" %[^\n]s", books[foundIndex].author);

    printf("Jumlah Halaman: ");
    scanf("%d", &books[foundIndex].pages);

    printf("Genre Buku: ");
    scanf(" %[^\n]s", books[foundIndex].genre);

    printf("Informasi buku berhasil diupdate!\n");
}

void deleteBook(struct Book books[], int *bookCount) {
    int targetID;
    printf("Masukkan ID buku yang ingin dihapus: ");
    scanf("%d", &targetID);

    int foundIndex = -1;
    for (i = 0; i < *bookCount; i++) {
        if (books[i].id == targetID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        printf("Buku dengan ID %d tidak ditemukan.\n", targetID);
        return;
    }

    // Pindahkan elemen terakhir ke posisi yang akan dihapus
    books[foundIndex] = books[*bookCount - 1];
    (*bookCount)--;

    printf("Buku dengan ID %d berhasil dihapus.\n", targetID);
}

int isDuplicateID(struct Book books[], int bookCount, int newID) {
    for (i = 0; i < bookCount; i++) {
        if (books[i].id == newID) {
            return 1; // ID sudah terdaftar
        }
    }
    return 0; // ID belum terdaftar
}

void saveBooksToFile(struct Book books[], int bookCount) {
    FILE *file = fopen("library_books.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < bookCount; i++) {
        fprintf(file, "%d|%s|%s|%d|%s\n", books[i].id, books[i].title, books[i].author, books[i].pages, books[i].genre);
    }
}