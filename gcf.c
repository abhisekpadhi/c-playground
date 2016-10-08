#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n1, n2, x, c;
  printf("\n Enter 2 numbers: ");
  scanf("%d %d", &n1, &n2);
  if (n1 != n2){
    c = 1;
    while (c<=(n1<n2?n1:n2)) {
      if (! (n1%c || n2%c) ) {
        x = c;
      }
        c++;
    }
  }
  else if (n1 == n2) {
    printf("\n GCF = %d", n1);
  }
  else
    printf("\n Bad inputs...\n");
  printf("\n GCF = %d \n", x);
  return 0;
}
