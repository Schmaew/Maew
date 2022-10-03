#include <stdio.h>
#include <stdlib.h>
void permutation (char s[], int k)
{
      static int A[10] = { 0 };
      static char Res[10];
      int i;
      if (s[k] == '\0')
      {
            Res[k] = '\0';
            printf ("%s\n", Res);
      }
      else
      {
            for (int i = 0; s[i] != '\0'; i++)
            {
                  if (A[i] == 0)
                  {
                         Res[k] = s[i];
                         A[i] = 1;
                         permutation (s, k + 1);
                         A[i] = 0;
                  }
            }
      }
}
int main ()
{
      char s[] = "ABC";
      printf ("string is \"%s\"\n", s);
      printf ("Permutations are: \n");
      permutation (s, 0);
       return 0;
}