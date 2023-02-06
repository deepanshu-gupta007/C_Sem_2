#include<stdio.h>
float fact(float n);
int main() {
  float num, sum=0;
  printf("Enter a number: ");
  scanf("%f", &num);
  for (int i=1; i<=num; i++)
    sum=sum+(i/fact(i));
  printf("Sum = %f\n", sum);
  return 0;
}
float fact(float n) {
  if (n>0){
    float fact=1;
    for (int i=1; i<=n; i++)
      fact*=i;
    return fact;
  }else
    return 1;
}