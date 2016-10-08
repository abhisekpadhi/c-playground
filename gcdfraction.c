/*Uses Euclid Algorith to find out GCD of 2 numbers (Used to reduce a fraction to simplest form */
#include <stdio.h>

typedef struct fraction {
  int numerator;
  int denominator;
} fraction;

/*====LOGIC====*/
int gcd (int a, int b) {
  int t;
  while (a > 0) {
    if (a < b) {
      t = a;
      a = b;
      b = t;
    }
    a = a - b;
  }
  return b;
}

int main (int argc, char const *argv[]) {
  fraction f;
  printf("\nEnter numerator and denominator: ");
  scanf("%d %d", &f.numerator,&f.denominator);
  printf("\n %d, %d, GCD= %d \n", f.numerator, f.denominator, gcd(f.numerator, f.denominator));
  return 0;
}
