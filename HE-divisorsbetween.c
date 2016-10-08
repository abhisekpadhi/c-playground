#include <stdio.h>

int main()
{
	long l,r,k,count=0;
  int i;
	scanf ("%ld %ld %ld", &l, &r, &k);
	for (i=l; i<=r ;i++) {
    if ( i%k == 0 )
      count+=1;
  }
  printf("%ld", count);
    return 0;
}
