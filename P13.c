#include<stdio.h>
void con(char []);
int main() {
    char a[50];
    printf("Enter a string: ");
    gets(a);
    con(a);
    printf("New String: %s", a);
    return 0;
} void con(char a[]) {
    int i;
    for (i=0; a[i]!='\0'; i++) {
        if (a[i]>64 && a[i]<91) a[i]=a[i]+32;
        else if (a[i]>96 && a[i]<123) a[i]=a[i]-32;
    }
}