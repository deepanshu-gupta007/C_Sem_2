#include<stdio.h>
float aoc();
float aor();
int eo();
int main() {
    int n, ans;
    do {
        printf("Select one option:\n1. Area of circle\n2. Area of rectangle\n3. Check a no. is even or odd\n4. Exit\n");
        scanf ("%d", &n);
        switch (n) {
            case 1:
                printf("Area of circle = %f\n", aoc());
                break;
            case 2:
                printf("Area of rectangle = %f\n", aor());
                break;
            case 3:
                ans=eo();
                if (ans==0) printf("Number is even\n");
                else printf("Number is odd\n");
                break;
            case 4:
                break;
            default:
                printf("Invalid Entry. \n");
                break;
        }
    } while (n!=4);
    return 0;
} float aoc() {
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    return 3.14*r*r;
} float aor() {
    float l, b;
    printf("Enter length and breadth: \n");
    scanf("%f %f", &l, &b);
    return l*b;
} int eo() {
    int num;
    printf("Enter a number to be check: ");
    scanf("%d", &num);
    if (num%2==0) return 0;
    else return 1;
}