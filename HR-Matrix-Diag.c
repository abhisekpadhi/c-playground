#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int diagdiff ( int size, int (*arr)[size]) {
    int diff = 0, d1=0, d2=0, i=0, j=0;
    for (i = 0; i < size; i++)
        d1 += arr[i][i];
    for (i = 0, j = size-1; i < size; i++, j--)
        d2 += arr[i][j];
    diff = d1 - d2;
    return diff;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n], a_i, a_j;
    for(a_i = 0; a_i < n; a_i++){
       for(a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
    }
    printf ("%d", abs(diagdiff(n,a)));
    return 0;
}
