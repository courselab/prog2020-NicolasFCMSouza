  /* m007.c - Number of letters.

   This program reads the name of a person from the standard input
   and outputs the number of letters contained in the name (excluding
   blanks and punctuation). The name should be entered using only
   ASCII characters (26 letter of latim alphabet, no diacrictics).


   E.g.

      command line    : m007
      standard input  : John Doe
      expected output : 7

   Directions:

      Please, edit function lettercount();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

int nl (char c)
{
  int n = 0;
  if (c>='a' && c<='z'){
    n+=1;
  }
  if (c>='A' && c<='Z'){
    n+=1;
  } 
  return n ;
}
/* Count the number of letters in string s.*/

int lettercount (char *s)
{
  int contagem =0, i = 0;
  while(s[i] != 0){
    contagem +=nl(s[i]);
    i++;
  }
  return contagem ;
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  n = lettercount (name);

  printf ("%d\n", n);
  
  return 0;
}
