#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int array[n];
    for (i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    } int l=array[0], s=array[0];
    for (i=0; i<n; i++){
        if (array[i]>l) l=array[i];
        if (array[i]<s) s=array[i];
    }
    printf("Largest element = %d and Smallest element = %d\n", l, s);
    return 0;
}