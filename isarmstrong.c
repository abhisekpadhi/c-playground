#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num, temp, sum, rem;
  printf("Enter a number: ");
  scanf ("%d", &num);\
  temp = num;
  sum = 0;
  while (num > 0) {
    rem = num % 10;
    sum = sum + (rem * rem * rem);
    num = num / 10;
  }

  if (temp == sum){
    printf("\nYes Armstrong !\n");
  }
  else
    printf("\nNo not Armstrong\n");

  return 0;
}
