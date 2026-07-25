#include <stdio.h>
#include <string.h>

// book structure
typedef struct {
    char title[100];
    char author[100];
    char isbn[100];
} Book;

Book library[100]; //store books
int bookCount = 0;

//func to add books
void addBook() {
    if(bookCount >= 100) {
        printf("Library is Full. Cannot enter more books!\n\n");
        printf("---------------------------------------------\n\n");
        return;
    }

    printf("\n\n");
    printf("Enter book title: ");
    getchar(); // clear \n from main
    fgets(library[bookCount].title, sizeof(library[bookCount].title), stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(library[bookCount].author, sizeof(library[bookCount].author), stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0';

    printf("Enter ISBN: ");
    fgets(library[bookCount].isbn, sizeof(library[bookCount].isbn), stdin);
    library[bookCount].isbn[strcspn(library[bookCount].isbn, "\n")] = '\0';

    bookCount++;
    printf("\n\n");
    printf("Book added successfully!\n\n\n");
    printf("---------------------------------------------\n\n");
}

//func to search books
void searchBook() {
    char query[100];
    int found = 0;

    printf("\n\n");
    printf("Enter book title or author to search: ");
    getchar(); // clear \n from main
    fgets(query, sizeof(query), stdin);
    query[strcspn(query, "\n")] = '\0';

    for(int i = 0; i < bookCount; i++) {
        if(strcmpi(library[i].title, query) == 0 || strcmpi(library[i].author, query) == 0) {
            printf("Book Found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].isbn);
            found = 1;
            printf("\n\n");
        }
    }

    if(!found) {
        printf("Book not found!\n\n");
        printf("---------------------------------------------\n\n");
    }
}

//func to view all books
void view_AllBooks() {
    if(bookCount == 0) {
        printf("There are no books available in the library.\n\n");
        printf("---------------------------------------------\n\n");
    }

    printf("\n\n");
    printf("Library Catalog:\n");
    printf("----------------------\n");
    for(int i = 0; i < bookCount; i++) {
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("ISBN: %s\n\n\n", library[i].isbn);
    }

    printf("---------------------------------------------\n\n");
}

int main() {
    int option = 0;

    printf("Library Management System\n");
    printf("=================================\n");

    while (option != 4) {
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. View All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchBook();
            break;
        case 3:
            view_AllBooks();
            break;
        case 4:
            printf("\n");
            printf("Exiting the system....\n");
            printf("Thank you for using the Library Management System!");
            break;
        default:
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
