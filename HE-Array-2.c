#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,*A,N;

	//First input line is the size of array
	scanf("%d",&N);

	A = (int *)malloc(N*sizeof(int));

	//Input array
	for (i=0; i<N; i++){
		scanf ("%d", A+i);
	}

	//Output array
	for (i=0; i<N; i++) {
		printf ("%d\n", A[i]-1);
	}
	free (A);

    return 0;
}
