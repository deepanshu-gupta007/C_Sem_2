#include<stdio.h>
int main() {
    int i, n, j;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n], *x;
    x=arr;
    for (i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", x+i);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (*(x+i)>=*(x+j)){
                int temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for (i=0; i<n; i++)
        printf("%d\t", *(x+i));
    return 0;
}