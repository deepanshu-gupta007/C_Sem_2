#include<stdio.h>
void substring(char *, char *);
int main () {
    char a[50], b[50], *p, *q;
    printf("Enter a string: ");
    gets(a); p=&a[0];
    printf("Enter a substring: ");
    gets(b); q=&b[0];
    substring(p, q);
    return 0;
} void substring (char *p, char *q) {
    int i, j, l, c=0;
    for (l=0; *(q+l)!='\0'; l++);
    for (i=0; *(p+i)!='\0'; i++) {
        for (j=c; *(q+j)!='\0'; j++) {
            if (*(p+i)==*(q+j)) c++;
            if (c==l) {
                printf("String found at index: %d", i-j);
                break;
            }
        }
    }
}