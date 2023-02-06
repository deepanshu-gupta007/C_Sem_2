#include<stdio.h>
int main () {
    int a=1, *p;
    char b='A', *q;
    float c=1, *r;
    double d=1, *s;
    short e=1, *x;
    p=&a, q=&b, r=&c, s=&d, x=&e;
    printf("Size of interger type value = %d\n", sizeof(*p));
    printf("Size of character type value = %d\n", sizeof(*q));
    printf("Size of float type value = %d\n", sizeof(*r));
    printf("Size of double type value = %d \n", sizeof(*s));
    printf("Size of short type value = %d \n", sizeof(*x));
    return 0;
}