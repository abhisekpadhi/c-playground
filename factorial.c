#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num;
  long int fact=1;
  printf("\n Enter a number: ");
  scanf("%d",&num );
  while (num > 1){
    fact = fact * num;
    num --;
  }
  printf("\n Factorial = %ld \n", fact);

  return 0;
}
