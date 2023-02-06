#include<stdio.h>
int main () {
    char a[50];
    int p, n, l, i;
    printf("Enter a string: ");
    gets(a);
    printf("Enter the position from where you want to delete: ");
    scanf("%d", &p);
    printf("Enter no. of characters to be deleted: ");
    scanf("%d", &n);
    for (l=0; a[l]!='\0'; l++);
    for (i=p-1; i<l; i++)
        a[i]=a[i+n];
    printf("String after removing white space: %s", a);
    return 0;
}