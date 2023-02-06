#include<stdio.h>
void search(int *, int, int);
int main() {
    int n, num, i;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (arr+i));
    } printf("Enter a number to be search: ");
    scanf("%d", &num);
    search (arr, num, n);
    return 0;
}void search (int *a, int n, int size) {
    int c=0;
    for (int i=0; i<size; i++) {
        if (*(a+i)==n){
            printf("Element found at position = %d\n", i+1);
            c++;
        }
    } if (c==0) printf ("Element not found");
}