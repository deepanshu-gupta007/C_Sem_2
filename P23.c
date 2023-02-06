#include<stdio.h>
int main () {
    char a[50], *p;
    int i;
    printf("Enter a string: ");
    gets(a);
    p=&a[0];
    for (i=0; *p!='\0'; i++) p++;
    printf("Length of a string = %d", i);
    return 0;
}