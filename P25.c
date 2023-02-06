#include<stdio.h>
void sum(int *, int);
int main() {
    int n;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (arr+i));
    }
    sum(arr, n);
    return 0;
} void sum (int* a, int n) {
    int x=0, y=0;
    for(int i=0; i<n; i++) {
        if (*(a+i)%2==0)
            x+=(*(a+i));
        else y+=(*(a+i));
    }
    printf ("Sum of even numbers = %d and odd numbers = %d", x, y);
}