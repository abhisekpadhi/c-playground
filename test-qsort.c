#include <stdio.h>
#include <stdlib.h>

int values[] = { 1, 2, 7, 5, 6, 10, 220 };

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n, cost, mincost=1;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 7; n++ )
   {
      printf("%d ", values[n]);
   }

   qsort(values, 7, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 7; n++ )
   {
      printf("%d ", values[n]);
   }
   printf("\n");

   for ( n =0; n < 6; n++ ) {
     cost = values[n+1] - values[n];
     if ( cost <= mincost )
      mincost = cost;
   }

   printf("\nCost (min) : %d\n", mincost);


   return(0);
}
