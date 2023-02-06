#include<stdio.h>
int main() {
  int a,b,c;
  printf("Enter numbers:\n");
  scanf("%d %d",&a, &b);
  printf("A = %d and B = %d\n", a, b);
  c=a, a=b, b=c;
  printf("A = %d and B = %d\n", a, b);
  return 0;
}