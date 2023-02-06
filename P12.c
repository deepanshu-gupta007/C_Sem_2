#include<stdio.h>
void alphaorder(char []);
int main() {
    char a[50];
    printf("Enter a string: ");
    gets(a);
    alphaorder(a);
    printf("Rewrite String: %s", a);
    return 0;
} void alphaorder(char a[]) {
    int i, j, x;
    char temp;
    for (i=0; a[i]!='\0'; i++); 
    x=i;
    for (i=0; a[i]!='\0'; i++) {
        for (j=0; j<(x-i-1); j++) {
            if (a[j]>a[j+1]) {
                temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
            }
        }
    }
}