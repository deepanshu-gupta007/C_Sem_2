#include<stdio.h>
int main() {
    char c[500], r[500], p[500], q[500];
    char x='Y', *i=r;
    int count=0, j, k;
    FILE *f1=fopen("P49a.txt","w+");
    if (f1==NULL)
        printf("File 1 not opened");
    else {
        printf("Enter some content:\n");
        while (x=='Y' || x=='y') {
            scanf(" %[^\n]s",c);
            fputs(c, f1);
            fputs("\n", f1);
            printf("Do you to add more lines: ");
            scanf("%s", &x);
        }
        rewind(f1);
        FILE *v=fopen("P49b.txt","w+");
        FILE *c=fopen("P49c.txt","w+");
        if (v==NULL || c==NULL)
            printf("Files are not opened");
        else {
            do {
                i=fgets(r, 500, f1);
                count++;
            } while (i!=NULL);
            rewind(f1);
            for (k=0; k<count-1; k++) {
                i=fgets(r, 500, f1);
                for(j=0; *(i+j)!='\0'; j++){
                    if (*(i+j)=='a' || *(i+j)=='e' || *(i+j)=='i' || *(i+j)=='o' || *(i+j)=='u' || *(i+j)=='A' || *(i+j)=='E' || *(i+j)=='I' || *(i+j)=='O' || *(i+j)=='U')
                        putc(*(i+j), v);
                    else if ((*(i+j)>64 && *(i+j)<91) || (*(i+j)>96 && *(i+j)<123))
                        putc(*(i+j), c);
                }
                fprintf(v, "\n");
                fprintf(c, "\n");
            }
            rewind(v), rewind(c);
            printf("Content in vowel's file:\n");
            for (k=0; k<count-1; k++)
                printf("%s", fgets(p, 500, v));
            printf("Content in consonent's file:\n");
            for (k=0; k<count-1; k++)
                printf("%s", fgets(q, 500, c));
            fclose(v);
            fclose(c);
        }
        fclose(f1);
        
    }
    return 0;
}