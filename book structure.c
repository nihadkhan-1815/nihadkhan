#include <stdio.h>
struct book {
    char name[45];
    int price;
    char author[12];
};

int main() {
    struct book C;

    printf("Enter the name of the book: ");
    scanf("%44s", C.name);

    printf("Enter the price of the book: ");
    scanf("%d", &C.price);
    printf("Enter the author's name: ");
    scanf("%11s", C.author);
    printf("\nBook Details:\n");
    printf("Name: %s\n", C.name);
    printf("Price: %d\n", C.price);
    printf("Author: %s\n", C.author);

    return 0;
}