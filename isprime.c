#include <stdio.h>
int main(int argc, char const *argv[]) {
  int num,counter,flag=0;
  printf("\nEnter a number:");
  scanf("%d", &num);
  counter = 1;
  while (counter<=num) {
    if (!(num%counter))
      flag = flag + 1;
    counter++;

  }
  if (flag == 2) {
    printf("\nPrime number\n");
  }
  else
    printf("\n Not prime\n");
  return 0;
}
