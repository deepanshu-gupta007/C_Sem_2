#include<stdio.h>
int main() {
    char c[500], r[500];
    char x='Y', *i=r;
    FILE *f=fopen("P47.txt","w+");
    if (f==NULL)
        printf("File not opened");
    else {
        printf("Enter some content:\n");
        while (x=='Y' || x=='y') {
            scanf(" %[^\n]s",c);
            fputs(c, f);
            fputs("\n", f);
            printf("Do you to add more lines: ");
            scanf("%s", &x);
        }
        rewind(f);
        int count=0;
        do {
            i=fgets(r, 500, f);
            count++;
        } while (i!=NULL);
        printf("Number of lines: %d", count-1);
        fclose(f);
    }
    return 0;
}