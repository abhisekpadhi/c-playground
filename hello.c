#include <stdio.h>
#define PI 3.14
#define sq(x) return (x*x)
int r;
// static float area = PI*r*r; //This will be an error, as static variable initialization must always be constant
int main (int argc, char const *argv[]) {
  /*int c; // Not char data type, because c must be large enough to store EOF
  while ( ( c = getchar () ) != EOF) {
    putchar (c);
  }*/
  // char c = EOF;
  // printf("\n EOF Character is %c %d \n", c, c);
  // double count;
  // for (count =0; getchar() != '\n'; ++count);
  // printf("\nTotal characters = %.0f \n", count);
  //extern int r;
  // printf("\nEnter radius: ");
  // scanf("%d", &r);
  // printf("\nArea : %4.2f\n", PI*r*r);
  // printf("\nArea : %.2f\n", area);
  // testextern();
  return 0;
  int x = 5;
  printf("\n %d \n", sq(x));
}

// int testextern () {
//   printf("\n R = %d \n", r);
// }
