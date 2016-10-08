#include <stdio.h>
#include <stdlib.h>

int values[] = { 1, 2, 7, 5, 6, 10, 220 };

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n, i, j, hit;

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

   for (i=6; i>0; i--) {
     for (j=i-1; j>0; j--) {
       if (values[j]+values[j-1] == values[i]) {
         hit = values[i];
         break;
       }
     }
   }

   printf("\n Largest number : %d\n", hit);

   return(0);
}
