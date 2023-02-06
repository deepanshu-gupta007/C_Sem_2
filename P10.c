#include<stdio.h>
char pd(char[]);
int main() {
    char a[50];
    printf("Enter a string: ");
    gets(a);
    printf("String is palindrome: %c\n", pd(a));
    return 0;
} char pd(char a[]) {
    int i, j, x, count=0;
    for (i=0; a[i]!='\0'; i++);
    x=i; i=i-1;
    for (j=0; j<=x/2; j++) {
        if (a[j]==a[i--]) count++;
        else return 'N';
    } if (count==(x/2)+1) return 'Y';
}