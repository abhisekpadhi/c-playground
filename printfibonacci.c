#include <stdio.h>
int main(int argc, char const *argv[]) {
  int fnum, snum, n, counter=0, tnum;
  printf("\nHow many terms: ");
  scanf("%d", &n);
  fnum = 0;
  snum = 1;
  tnum = 0;
  while (counter < n) {
    printf("%d", tnum);
    fnum = snum;
    snum = tnum;
    tnum = fnum + snum;
    counter ++;
  }
  printf("\n");
  return 0;
}
