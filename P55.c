#include<stdio.h>
int main() {
    int i, a;
    FILE *f=fopen("P55a.txt", "r");
    FILE *p=fopen("P55b.txt", "w+");
    if (f==NULL || p==NULL)
        printf("File not open");
    else {
        while(fscanf(f, "%d", &a)!=(-1))
            fprintf(p, "%d\t", a*a*a);
        rewind(p);
        while(fscanf(p, "%d", &a)!=(-1))
            printf("%d\t", a);
        fclose(f), fclose(p);
    }
    return 0;
}