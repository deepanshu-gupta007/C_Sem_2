#include<stdio.h>
int comp(char [], char[]);
int main() {
    char a[50], b[50];
    printf("Enter two strings:\n");
    gets(a); gets(b);
    printf("%d\n", comp(a,b));
    return 0;
} int comp(char a[], char b[]) {
    int i, x, count=0;
    for (i=0; a[i]!='\0'; i++); x=i;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i]==b[i]) count++;
        else break;
    }
    if (a[i]=='\0' && b[i]=='\0') count++;
    if (count==(x+1)) return 1;
    else return 0;
}