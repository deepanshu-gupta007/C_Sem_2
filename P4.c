#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int array[n];
    for (i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("Elements in reverse order:\n");
    for (i=n; i>0; i--){
        printf("%d\t", array[i-1]);
    } printf("\n");
    return 0;
}