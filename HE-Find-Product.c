#include <stdio.h>
#include <stdlib.h>

int main()
{
    long N, *A, i, p;
    long ans=1;
    scanf ("%ld",&N);
    A = (long *)malloc(N*sizeof(int));
    for (i=0; i<N; ++i)
    	scanf ("%ld",A+i);
    for (i=0; i<N; i++) {
      p = ans * A[i];
      ans = (long)p % 1000000007;
    }
    printf ("%ld", ans);
    /*free (A);*/
    return 0;
}
