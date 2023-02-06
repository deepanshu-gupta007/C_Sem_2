#include<stdio.h>
int main() {
    int c=0, n, *p;
    printf("Enter the length of an array: ");
    scanf("%d", &n);
    int arr[n];
    p=arr;
    printf("Menu Driven:-\n1. Input elements in an array\n2. Delete an element from an array\n3. Insert an element at a particular position\n4. Display the array\n5. Search for an element in an array\n6. Quit\n");
    while (c!=6) {
        printf("Enter your choice: ");
        scanf("%d", &c);
        if (c==1) {
            for (int i=0; i<n; i++) {
                printf("Enter the element %d: ", i+1);
                scanf("%d", p+i);
            }
        }
        else if (c==2) {
            int d;
            printf("Enter the element to be deleted: ");
            scanf("%d", &d);
            for (int i=0; i<n; i++) {
                if (*(p+i)==d) {
                    int j;
                    for (j=i; j<n; j++)
                        *(p+j)=*(p+j+1);
                    break;
                }
            }
            n=n-1;
        }
        else if (c==3) {
            int a, v;
            n=n+1;
            printf("Enter the element to be inseted and the position where you want to be inserted: ");
            scanf("%d %d", &a, &v);
            for (int i=n-1; i>=v-1; i--)
                *(p+i)=*(p+i-1);
            *(p+v-1)=a;
        }
        else if (c==4) {
            for (int i=0; i<n; i++) 
                printf("%d\t", *(p+i));
            printf("\n");
        }
        else if (c==5) {
            int s, count=0, i;
            printf("Enter element to be search: ");
            scanf("%d", &s);
            for (i=0; i<n; i++)
                if (*(p+i)==s)
                    count++;
            if (count==0) printf("Element not found");
            else printf("Element found at position = %d\n", i+1);
        }
        else if (c==6) break;
        else printf("Invalid Entry.\n");
    }
    return 0;
}