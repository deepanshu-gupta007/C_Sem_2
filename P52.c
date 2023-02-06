#include<stdio.h>
int main() {
    char c[50];
    int n, x, i, sum=0;
    FILE *f=fopen("P52.txt","w+");
    if (f==NULL)
        printf("File not opened");
    else {
        printf("Enter number of integers: ");
        scanf("%d", &n);
        for(x=0; x<n; x++) {
            printf("Enter number %d: ", x+1);
            scanf("%d", &i);
            putw(i, f);
        }
        rewind(f);
        for(x=0; x<n; x++)
            sum+=getw(f);
        printf("Sum of integers: %d", sum);
        fclose(f);
    }
    return 0;
}