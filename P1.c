#include<stdio.h>
int fact(int n);
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Factorial of %d = %d\n", num, fact(num));
  return 0;
}
int fact(int n) {
  if (n>0)
    return n*fact(n-1);
  else
    return 1;
}