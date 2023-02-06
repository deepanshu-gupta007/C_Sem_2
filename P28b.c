#include<stdio.h>
int main () {
    char a[50], *p;
    printf("Enter a string: ");
    gets(a);
    int i;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i]==' ' || a[i]=='.')
            a[i]=';';
    } printf("String after removing white space: %s", a);
    return 0;
}