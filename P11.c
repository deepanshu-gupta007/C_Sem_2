#include<stdio.h>
void concat(char [], char[]);
int main() {
    char a[50], b[50];
    printf("Enter two strings: \n");
    gets(a);
    gets(b);
    concat(a,b);
    printf("Result = %s", a);
    return 0;
} void concat(char a[], char b[]) {
    int i, j;
    for (i=0; a[i]!='\0'; i++);
    for (j=0; b[j]!='\0'; j++)
        a[i++]=b[j];
    a[i]='\0';
}