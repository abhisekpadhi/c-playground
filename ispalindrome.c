#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num, temp, rem, rev=0;
  printf("Enter a number to test palindrome: ");
  scanf("%d",&num );
  temp = num;
  while (num >0) {
    rem = num % 10;
    rev = ( rev * 10 ) + rem;
    num = num / 10;
  }
  if (temp == rev) {
    printf("\n palindrome !\n");
  }
  else
    printf("\n Not palindrome :-\( \n");
  return 0;
}
