#include<stdio.h>
int main() {
    char a[50];
    printf("Enter a string: ");
    gets(a);
    int i;
    for (i=0; a[i]!='\0'; i++);
    printf("Number o characters entered = %d", i);
    return 0;
}