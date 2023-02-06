#include<stdio.h>
int main() {
    char a[50], *p;
    printf("Enter a string: ");
    gets(a);
    int v=0, c=0;
    p=&a[0];
    for (int i=0; *p!='\0'; i++){
        if (*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
            v++;
        else if ((*p>64 && *p<91)||(*p>96 && *p<123))
            c++;
        p++;
    }
    printf("Vowels = %d and Constants = %d", v, c);
    return 0;
}