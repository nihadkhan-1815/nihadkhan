#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int id;
    char title[50];
    char author[50];
    float price;
} Book;


Book books[MAX_BOOKS];
int book_count = 0;

// Function to add a new book
void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("Book record is full! Cannot add more books.\n");
        return;
    }
    
    Book new_book;
    printf("Enter Book ID: ");
    scanf("%d", &new_book.id);
    getchar(); // To clear the newline character in the input buffer
    printf("Enter Book Title: ");
    fgets(new_book.title, sizeof(new_book.title), stdin);
    new_book.title[strcspn(new_book.title, "\n")] = '\0'; 
    printf("Enter Book Author: ");
    fgets(new_book.author, sizeof(new_book.author), stdin);
    new_book.author[strcspn(new_book.author, "\n")] = '\0'; // Remove newline character
    printf("Enter Book Price: ");
    scanf("%f", &new_book.price);

    books[book_count++] = new_book;
    printf("Book added successfully!\n");
}

void display_books() {
    if (book_count == 0) {
        printf("No books available!\n");
        return;
    }

    printf("\nBook Records:\n");
    printf("ID\tTitle\t\tAuthor\t\tPrice\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < book_count; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", books[i].id, books[i].title, books[i].author, books[i].price);
    }
}


void search_book() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", books[i].id, books[i].title, books[i].author, books[i].price);
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

    // Shift all books after the deleted book
    for (int i = index; i < book_count - 1; i++) {
        books[i] = books[i + 1];
    }
    book_count--;
    printf("Book with ID %d deleted successfully!\n", id);
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
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
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}