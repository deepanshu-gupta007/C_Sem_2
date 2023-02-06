#include<stdio.h>
int main() {
  int a,b;
  printf("Enter numbers:\n");
  scanf("%d %d",&a, &b);
  printf("A = %d and B = %d\n", a, b);
  a=a+b, b=a-b, a=a-b;
  printf("A = %d and B = %d\n", a, b);
  return 0;
}