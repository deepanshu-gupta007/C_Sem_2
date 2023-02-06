#include<stdio.h>
int main() {
    int i, a;
    FILE *f=fopen("P56a.txt", "r");
    FILE *p=fopen("P56b.txt", "w+");
    if (f==NULL || p==NULL)
        printf("File not open");
    else {
        while(fscanf(f, "%d", &a)!=(-1))
            fprintf(p, "%d\t", a+100);
        rewind(p);
        while(fscanf(p, "%d", &a)!=(-1))
            printf("%d\t", a);
        fclose(f), fclose(p);
    }
    return 0;
}