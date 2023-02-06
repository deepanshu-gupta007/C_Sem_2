#include<stdio.h>
int main() {
    char c[500], r[500];
    int i, count=1;
    FILE *f=fopen("P54a.txt","w+");
    FILE *p=fopen("P54b.txt","w+");
    if (f==NULL || p==NULL)
        printf("File not opened");
    else {
        printf("Enter some content: ");
        gets(c);
        fputs(c, f);
        rewind(f);
        fgets(r, 500, f);
        for(i=0; r[i]!='\0'; i++)
            if (r[i]==' ') count++;
        putw(count, p);
        rewind(p);
        printf("Number of charaters: %d", getw(p));
        fclose(f), fclose(p);
    }
    return 0;
}