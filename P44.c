#include<stdio.h>
struct sum {
    int r, im;
};
int main() {
    int n, real=0, img=0;
    printf("Enter number of elements to be entered: ");
    scanf("%d", &n);
    struct sum s[n];
    for (int i=0; i<n; i++) {
        printf("Enter real and imaginary part of element %d:\n", i+1);
        scanf("%d %d", &s[i].r, &s[i].im);
        real+=s[i].r, img+=s[i].im;
    }
    printf("Sum = %d + %dj", real, img);
    return 0;
}