#include <stdio.h>

int main () {
  int j,k,n,count=0;
  scanf("%d", &n);
  for (j=1; j<n; j++) {
    for (k=j+1; k<n; k++) {
      if ( (j^k) <= n) {
        count++;
        printf("\n%d ^ %d = %d <---", j,k,j^k);
      }
      else
        printf("\n%d ^ %d = %d", j,k,j^k);
    }
  }
  printf("\nTotal pairs (less than %d) : %d\n", n,count);
}
