#include<stdio.h>
int main () {
    char a[50], b[50];
    int i, n;
    printf("Enter a string: ");
    gets(a);
    printf("Enter the extracted position and no. of characters t be extracted: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
        b[i]=a[n+i-1];
    b[i]='\0';
    printf("New String: %s", b);
    return 0;
}