#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a[10], i, j, temp;
  printf("\nEnter array elements (max: 10): ");
  for (i=0; i<10; i++) {
    scanf("%d", &a[i]);
  }
  j = i - 1;
  i = 0;
  while (i < j) {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    i++;
    j--;
  }
  printf("\n After reversal: \n");
  for (i=0; i<10; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
