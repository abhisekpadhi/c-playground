#include <stdio.h>

//Using Recursion
long primefactors (num)
{
  static int i=2;
  if (i<=num)
    {
      if (num%i==0)
        {
            printf (" %d ",i);
            num=num/i;
        }
      else
        i++;

      primefactors (num);
    }

    return;

}

//Using LOOP
void primefactorsl (num)
{
  long i=2;
  while (i<=num)
  {
    if (num%i==0)
      {
        printf (" %ld ",i);
        num = num / i;
      }
    else
      i++;
  }
  return ;
}

void main ()
{
  long num;
  printf ("\n ENTER A NUMBER :");
  scanf ("%ld",&num);
  printf ("\n PRIME FACTORS OF %ld are (Recursion): \n",num);
  primefactors (num);
  printf ("\n \n");
  printf ("\n PRIME FACTORS OF %ld are (Loop): \n",num);
  primefactorsl (num);
  printf ("\n \n");
}
