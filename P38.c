#include<stdio.h>
#include<stdlib.h>
int main () {
    int n, *p, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p=(int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", p+i);
        sum+=*(p+i);
    }printf("Sum = %d", sum);
    return 0;
}