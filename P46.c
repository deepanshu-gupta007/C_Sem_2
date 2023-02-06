#include<stdio.h>
int main() {
    char c[500], r[500];
    printf("Enter some content: ");
    gets(c);
    FILE *f=fopen("P46.txt","w+");
    if (f==NULL)
        printf("File not opened");
    else {
        fputs(c, f);
        rewind(f);
        printf("Content: %s", fgets(r, 500, f));
        fclose(f);
    }
    return 0;
}