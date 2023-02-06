#include<stdio.h>
struct cricket {
    char name[20];
    int score;
};
int main () {
    int n, i, t=0;
    printf("Enter no. of details to be entered: ");
    scanf("%d", &n);
    struct cricket c[n];
    for (i=0; i<n; i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s",c[i].name);
        printf("Enter score: ");
        scanf("%d", &c[i].score);
        t+=c[i].score;
    }
    printf("Total sales = %d", t);
    return 0;
}