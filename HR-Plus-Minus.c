#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void plusminus (int size, int *a) {
    float pos=0, neg=0, zer=0;
    for (int i = 0; i < size; i++) {
        if ( a[i] != 0 )
            a[i] > 0 ? ++pos : ++neg;
        else if ( a[i] == 0 )
            ++zer;
        else
            ; //Print Nothing to STDOUT
    }
    printf ("%.6f \n%.6f \n%.6f \n", (pos/size), (neg/size), (zer/size));
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    plusminus (n,arr);
    return 0;
}
