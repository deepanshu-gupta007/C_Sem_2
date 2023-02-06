#include<stdio.h>
void swap(int*, int*);
int main () {
    int a, *p, b, *q;
    p=&a, q=&b;
    printf("Enter two numbers: \n");
    scanf("%d %d", p, q);
    printf("Before Swapping: A=%d and B=%d\n", *p, *q);
    swap(p, q);
    printf("After Swapping: A=%d and B=%d\n", *p, *q);
    return 0;
} void swap(int *a, int *b) {
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}