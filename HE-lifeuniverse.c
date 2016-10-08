#include <stdio.h>
int main() {
  int n, c;
  FILE *fp, *fpt;
  fp = fopen ("temp.txt", "w");
  while (n!=42) {
    scanf("%d", &n);
    fprintf(fp, "%d\n", n);
  }
  fclose (fp);
  fpt = fopen ("temp.txt", "r");
  while (!feof(fpt)) {
    fscanf(fpt,"%d",&n);
    printf("%d\n",n);
    if (n == 42)
      break;
  }
  fclose (fpt);
  return 0;
}
