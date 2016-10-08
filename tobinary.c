#include <stdio.h>

void binary (int x) {
  int a[10], i;

  /* Initialise the array with 0's, else garbage value appears */
  for (i=0; i<10; i++)
    a[i] = 0;

  for (i=0; x > 0; i++) {
    a[i] = x % 2;
    x = x/2;
  }
  //a[i] = 1;
  printf("\n Binary is: ");
  for (i=0; i<10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int a;
  printf("\nEnter a integer (<128): ");
  scanf("%d", &a);
  binary (a);
  return 0;
}
