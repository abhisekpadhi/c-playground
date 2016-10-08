#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long n,k,q,*arr,i,j,temp,*qarr;
  scanf("%ld %ld %ld", &n, &k, &q);

  //Dynamically allocate memory for Array
  arr = (long *) malloc ( n * sizeof (int) );
  qarr = (long *) malloc ( q * sizeof (int) );
  
  //Input Array
  for (i = 0; i < n; i++) {
    scanf("%ld", arr+i);
  }

  //Rotating Array k times
  for ( i = 0; i < k; i++) {
    temp = arr[n-1];
    arr[n-1] = arr[n-2];
    arr[n-2] = arr[n-3];
    arr[0] = temp;
  }

  //Taking q Queries


  for (i = 0; i < q; i++) {
    scanf("%ld", qarr+i);
  }

  //Printing Value at m for queries q
  for (i = 0; i < q; i++) {
    printf("%ld\n", arr[qarr[i]]);
  }

  free (qarr);
  free (arr);
  return 0;
}
