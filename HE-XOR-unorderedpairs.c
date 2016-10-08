#include <stdio.h>
#include <stdlib.h>

int main() {
  long n,*arr,count=0;
  int t,i,j,k;
  scanf("%d", &t);
  arr = (long *)malloc(t*sizeof(long));

  for (i = 0; i < t; i++) {
    scanf("%ld", arr+i);
  }

  for (i = 0; i < t; i++) {
    //n = arr[i];
    count = 0;
    for (j = 1; j < arr[i]; j++) {
      for (k = j+1; k < arr[i]; k++) {
        if ( (j ^ k) <= arr[i] )
          count ++;
      }
    }
    printf("%ld\n", count);
  }

}
