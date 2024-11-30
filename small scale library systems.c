#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int id;
    char title[50];
    char author[50];
    int available; // 1 = available, 0 = issued
} Book;

Book books[MAX_BOOKS];
int book_count = 0;

void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    Book new_book;
    printf("Enter Book ID: ");
    scanf("%d", &new_book.id);
    getchar(); // Clear newline from buffer
    printf("Enter Book Title: ");
    fgets(new_book.title, sizeof(new_book.title), stdin);
    new_book.title[strcspn(new_book.title, "\n")] = '\0'; // Remove newline
    printf("Enter Book Author: ");
    fgets(new_book.author, sizeof(new_book.author), stdin);
    new_book.author[strcspn(new_book.author, "\n")] = '\0'; // Remove newline
    new_book.available = 1; // Mark as available

    books[book_count++] = new_book;
    printf("Book added successfully!\n");
}

void display_books() {
    if (book_count == 0) {
        printf("No books available in the library.\n");
        return;
    }

    printf("\nLibrary Book Records:\n");
    printf("ID\tTitle\t\t\tAuthor\t\t\tStatus\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < book_count; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n", books[i].id, books[i].title, books[i].author, books[i].available ? "Available" : "Issued");
    }
}

void search_book() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nStatus: %s\n",
                   books[i].id, books[i].title, books[i].author, books[i].available ? "Available" : "Issued");
            return;
        }
    }
    printf("Book with ID %d not found!\n", id);
}

void delete_book() {
    int id, index = -1;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Book with ID %d not found!\n", id);
        return;
    }

    for (int i = index; i < book_count - 1; i++) {
        books[i] = books[i + 1];
    }
    book_count--;
    printf("Book with ID %d deleted successfully!\n", id);
}

void issue_or_return_book() {
    int id, choice;
    printf("Enter Book ID to issue/return: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            printf("1. Issue Book\n");
            printf("2. Return Book\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1 && books[i].available) {
                books[i].available = 0;
                printf("Book ID %d issued successfully.\n", id);
            } else if (choice == 2 && !books[i].available) {
                books[i].available = 1;
                printf("Book ID %d returned successfully.\n", id);
            } else {
                printf("Invalid operation! Book is already in the requested state.\n");
            }
            return;
        }
    }
    printf("Book with ID %d not found!\n", id);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Issue/Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                search_book();
                break;
            case 4:
                delete_book();
                break;
            case 5:
                issue_or_return_book();
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}