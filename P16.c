#include<stdio.h>
int main () {
    int n, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], *x;
    x=a;
    for (int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", x);
        sum+=*x;
        x++;
    }
    printf("Sum = %d", sum);
    return 0;
}