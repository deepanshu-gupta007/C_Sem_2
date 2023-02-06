#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, *arr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", arr+i);
    } int l=*arr;
    for (int i=0; i<n; i++) 
        if (*(arr+i)>l) l=*(arr+i);
    printf("Largest element = %d", l);
    return 0;
}