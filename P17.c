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
        int count=0;
        for (j=0; j<n; j++) {
            if (*(x+i)>=*(x+j))
                count++;
        }
        if (count==1)
            printf("Smallest Element = %d\n", *(x+i));
        else if (count==n)
            printf("Largest Element = %d\n", *(x+i));
    }
return 0;
}