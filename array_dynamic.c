#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int N, *arr, i;
  printf("\n Enter Size of Array : ");
  scanf("%d", &N);
  arr = (int*) malloc ( N * sizeof (int) );
  if ( arr == NULL ) {
    printf("\nError allocating Memory !");
    exit (0);
  }
  else {

    printf("\n Input Array: ");
    for (i=0; i<N; i++) {
      scanf("%d", arr+i);
    }

    printf("\nPrinting the array in reverse order : ");

    for (i=N-1; i>=0; i--) {
      printf(" ");
      printf("%d", arr[i]);
    }

    printf("\n");
  }

  free (arr);
  return 0;
}
