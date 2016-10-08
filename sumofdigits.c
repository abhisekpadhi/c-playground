#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num, rem, sum=0;
  printf("Enter a number:");
  scanf("%d",&num );
  while (num > 0) {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  }
  printf("\nSum of digits = %d \n", sum);
  return 0;
}
