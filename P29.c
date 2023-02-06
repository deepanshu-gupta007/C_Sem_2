#include<stdio.h>
int main () {
    char a[50], b[50];
    printf("Enter a string: ");
    gets(a);
    printf("Enter a substring: ");
    gets(b);
    int l1, l2, x, i;
    for (l1=0; a[l1]!='\0'; l1++);
    for (l2=0; b[l2]!='\0'; l2++);
    printf("Enter the index: ");
    scanf("%d", &x);
    for (i=l1; i>=x; i--)
        a[i+l2]=a[i];
    for (i=0; i<l2; i++)
        a[i+x]=b[i];
    printf("New String = %s", a);
    return 0;
}