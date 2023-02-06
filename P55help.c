#include<stdio.h>
int main() {
    int i, a, n;
    FILE *f=fopen("P55a.txt", "w");
    if (f==NULL)
        printf("File not open");
    else {
        printf("Enter how many numbers to be entered: ");
        scanf("%d", &n);
        for(i=0; i<n; i++){
            printf("Enter number %d: ", i+1);
            scanf("%d", &a);
            fprintf(f, "%d\t", a);
        }
        fclose(f);
    }
    return 0;
}