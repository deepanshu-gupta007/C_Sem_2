#include<stdio.h>
int main () {
    int n, odd=0, even=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], *x;
    x=a;
    for (int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", x+i);
    }
    for (int i=0; i<n; i++){
        if (i%2==0) odd+=*(x+i);
        else even+=*(x+i);
    }
    printf("Sum at odd position = %d\nSum at even position = %d", odd, even);
    return 0;
}