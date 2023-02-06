#include<stdio.h>
int main() {
    char a[100];
    printf("Enter a string: ");
    gets(a);
    for (int i=0; a[i]!=0; i++) {
        if (a[i]>96 && a[i]<123) {
            printf("First small case letter = %c", a[i]);
            break;
        }
    }
    return 0;
}