#include<stdio.h>
int main () {
    char a[50], *p;
    printf("Enter a string: ");
    gets(a);
    p=a;
    int i, c=0;
    for (i=0; *(p+i)!='\0'; i++)
        if (*(p+i)==' ') c++;
    printf("Length with white space: %d\n", i);
    printf("Length without white space: %d\n", i-c);
    return 0;
}