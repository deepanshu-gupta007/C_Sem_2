#include<stdio.h>
struct book {
    char name[20], author[20];
    int pages, price;
};
int main () {
    int n, i;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct book b[n];
    for (i=0; i<n; i++) {
        printf("Book %d -\n", i+1);
        char c=getchar();
        printf("Enter name of book: ");
        gets(b[i].name);
        printf("Enter name of author: ");
        gets(b[i].author);
        printf("Enter no. of pages: ");
        scanf("%d", &b[i].pages);
        printf("Enter price: ");
        scanf("%d", &b[i].price);
    } printf("----------------------------------------"); 
    for (i=0; i<n; i++) {
        printf("Book %d -\n", i+1);
        printf("Name of the book: %s\nName of the author: %s\nNo. of pages: %d\nPrice: %d\n", b[i].name, b[i].author, b[i].pages, b[i].price);
    }
    return 0;
}