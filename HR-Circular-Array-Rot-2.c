#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  long n,k,q,i,j,temp1,temp2;
    long arr[100000], qarr[500];
    //long *arr, *qarr;
  scanf("%ld %ld %ld", &n, &k, &q);


  //Dynamically allocate memory for Array
  //arr = (long *) malloc ( n * sizeof (int) );
  //qarr = (long *) malloc ( q * sizeof (int) );

  //Input Array
  for (i = 0; i < n; i++) {
    //scanf("%ld", arr+i);
      scanf("%ld", &arr[i]);
  }

  //Rotating Array k times

  for ( i = 0; i < k; i++) {
    temp1 = arr[0];
    arr[0] = arr[n-1];
    for ( j = 0; j < n; j++) {
      temp2 = arr[j+1];
      arr[j+1] = temp1;
      temp1 = temp2;
    }
    arr[n-1] = temp1;
  }

  //Taking q Queries
  for (i = 0; i < q; i++) {
    //scanf("%ld", qarr+i);
      scanf("%ld", &qarr[i]);
  }

  //Printing Value at m for queries q
  for (i = 0; i < q; i++) {
    printf("%ld\n", arr[qarr[i]]);
  }

  //free (qarr);
  //free (arr);

    return 0;
}
