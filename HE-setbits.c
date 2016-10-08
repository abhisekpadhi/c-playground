#include <stdio.h>
#include <stdlib.h>
int main() {
  long t,n,count,*arr,i;
  scanf("%ld", &t);
  arr = (long *)malloc(t*sizeof(long));
  for (i=0; i<t; i++)
    scanf("%ld", arr+i);
  for (i=0; i<t; i++) {
    n = arr[i];
    count = 0;
    while (n) {
      n = n & (n-1);
      count++;
    }
    printf("%ld\n", count);
  }
  free (arr);
  return 0;
}
