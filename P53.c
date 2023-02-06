#include<stdio.h>
int main() {
    char c[500], r[500];
    int i;
    FILE *f=fopen("P53a.txt","w+");
    FILE *p=fopen("P53b.txt","w+");
    if (f==NULL || p==NULL)
        printf("File not opened");
    else {
        printf("Enter some content: ");
        gets(c);
        fputs(c, f);
        rewind(f);
        fgets(r, 500, f);
        for(i=0; r[i]!='\0'; i++);
        putw(i, p);
        rewind(p);
        printf("Number of charaters: %d", getw(p));
        fclose(f), fclose (p);
    }
    return 0;
}