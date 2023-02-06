#include<stdio.h>
int main() {
    char a[50], b[50];
    printf("Enter two strings: \n");
    printf("A = "); gets(a);
    printf("B = "); gets(b);
    int i;
    for (i=0; b[i]!='\0'; i++) a[i]=b[i];
    a[i]=b[i];
    printf("After copy,\nA = %s\n", a);
    printf("B = %s\n", b);
    return 0;
}