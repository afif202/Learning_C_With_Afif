#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50
#define MAX_GENRE_LENGTH 5
#define FILENAME "library_books.txt"

void saveToFile();
void loadFromFile();
void displayBooks();
int isIdExist(int id);
void createNewBook();
void updateBook();
void deleteBook();

struct Book
{
	int id;
	char title[MAX_TITLE_LENGTH];
	char author[MAX_AUTHOR_LENGTH];
	int num_pages;
	char genre[MAX_GENRE_LENGTH];
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

int main()
{
	printf("Selamat datang di sistem manajemen perpustakaan\n");
	printf("Program ini memungkinkan kamu mengelola buku perpustakaan.\n");

	loadFromFile();

	char choice;
	do
	{
		printf("\nMenu:\n");
		printf("a. Create New Book\n");
		printf("b. Display List of Books\n");
		printf("c. Update Book Information\n");
		printf("d. Delete Book\n");
		printf("e. Exit\n");
		printf("Enter your choice: ");
		scanf(" %c", &choice);

		switch (choice)
		{
		case 'a':
			createNewBook();
			break;
		case 'b':
			displayBooks();
			break;
		case 'c':
			updateBook();
			break;
		case 'd':
			deleteBook();
			break;
		case 'e':
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice! Please enter again.\n");
			break;
		}

		saveToFile();
	} while (choice != 'e');

	return 0;
}

void saveToFile()
{
	FILE *file = fopen(FILENAME, "w");
	if (file == NULL)
	{
		printf("Error opening file!\n");
		return;
	}

	for (int i = 0; i < bookCount; ++i)
	{
		fprintf(file, "id: %d\nTitle: %s\nAuthor: %s\nPage: %d\ngenre: %s\n", library[i].id, library[i].title, library[i].author, library[i].num_pages, library[i].genre);
	}

	fclose(file);
}

void loadFromFile()
{
	FILE *file = fopen(FILENAME, "r");
	if (file == NULL)
	{
		printf("File not found or unable to open.\n");
		return;
	}

	while (fscanf(file, "%d;%[^;];%[^;];%d;%[^\n]\n", &library[bookCount].id, library[bookCount].title, library[bookCount].author, &library[bookCount].num_pages, library[bookCount].genre) != EOF)
	{
		bookCount++;
	}

	fclose(file);
}

void displayBooks()
{
	if (bookCount == 0)
	{
		printf("No books available.\n");
		return;
	}

	printf("List of Books:\n");
	printf("ID\tTitle\tAuthor\tPages\tGenre\n");
	for (int i = 0; i < bookCount; ++i)
	{
		printf("%d\t%s\t%s\t%d\t%s\n", library[i].id, library[i].title, library[i].author, library[i].num_pages, library[i].genre);
	}
}

int isIdExist(int id)
{
	for (int i = 0; i < bookCount; ++i)
	{
		if (library[i].id == id)
		{
			return 1;
		}
	}
	return 0;
}

void createNewBook()
{
	struct Book newBook;
	printf("Enter Book ID: ");
	scanf("%d", &newBook.id);

	if (isIdExist(newBook.id))
	{
		printf("ID already exists. Please enter a different ID.\n");
		return;
	}

	printf("Enter Title: ");
	scanf(" %[^\n]s", newBook.title);
	printf("Enter Author: ");
	scanf(" %[^\n]s", newBook.author);
	printf("Enter Number of Pages: ");
	scanf("%d", &newBook.num_pages);
	printf("Enter Genre: ");
	scanf(" %[^\n]s", newBook.genre);

	library[bookCount++] = newBook;
	printf("Book added successfully!\n");
}

void updateBook()
{
	int searchId, found = 0;
	printf("Enter ID of the book to update: ");
	scanf("%d", &searchId);

	for (int i = 0; i < bookCount; ++i)
	{
		if (library[i].id == searchId)
		{
			printf("Enter new ID: ");
			scanf("%d", &library[i].id);

			printf("Enter new Title: ");
			scanf(" %[^\n]s", library[i].title);
			printf("Enter new Author: ");
			scanf(" %[^\n]s", library[i].author);
			printf("Enter new Number of Pages: ");
			scanf("%d", &library[i].num_pages);
			printf("Enter new Genre: ");
			scanf(" %[^\n]s", library[i].genre);

			printf("Book information updated!\n");
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("Book not found!\n");
	}
}

void deleteBook()
{
	int searchId, found = 0;
	printf("Enter ID of the book to delete: ");
	scanf("%d", &searchId);

	for (int i = 0; i < bookCount; ++i)
	{
		if (library[i].id == searchId)
		{
			for (int j = i; j < bookCount - 1; ++j)
			{
				library[j] = library[j + 1];
			}
			bookCount--;
			printf("Book deleted!\n");
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("Book not found!\n");
	}
}