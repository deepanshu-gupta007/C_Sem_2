#include<stdio.h>
int main () {
    int n, i, k;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to be checked: ");
    scanf("%d", &k);
    int less=0, greater=0, equal=0;
    for (i=0; i<n; i++) {
        if (arr[i]<k) less++;
        else if (arr[i]>k) greater++;
        else equal++;
    }
    printf("Less than %d = %d\n", k, less);
    printf("Greater than %d = %d\n", k, greater);
    printf("Equal to %d = %d\n", k, equal);
    return 0;
}