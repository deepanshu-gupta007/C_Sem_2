#include<stdio.h>
int main() {
    char c[500], m[10];
    int n, x;
    FILE *f=fopen("P51.txt","w+");
    if (f==NULL)
        printf("File not opened");
    else {
        printf("Enter number of students: ");
        scanf("%d", &n);
        for(x=0; x<n; x++) {
            printf("Enter name and marks of student %d:\n", x+1);
            scanf("%s %s", &c, &m);
            fprintf(f, "Student %d: ", x+1);
            fputs(c, f);
            fputs("\n", f);
            fputs(m, f);
            fputs("\n", f);
        }
        rewind(f);
        for(x=0; x<n; x++) {
            printf("Enter name of %s", fgets(c, 500, f));
            printf("Enter marks of Student %d: %s", x+1, fgets(m, 10, f));
        }
        fclose(f);
    }
    return 0;
}