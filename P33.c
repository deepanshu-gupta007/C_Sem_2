#include<stdio.h>
struct employee {
    char name[20];
    int sales;
};
int main () {
    int n, i, t=0, avg;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct employee e[n];
    for (i=0; i<n; i++) {
        printf("Employee %d -\n", i+1);
        char c=getchar();
        printf("Enter name: ");
        gets(e[i].name);
        printf("Enter sales: ");
        scanf("%d", &e[i].sales);
        t+=e[i].sales;
    } printf("----------------------------------------"); 
    avg=t/n;
    printf("Total sales = %d\nAverage Sales = %d", t, avg);
    return 0;
}