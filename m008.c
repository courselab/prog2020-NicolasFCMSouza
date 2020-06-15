/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 256

int pe(char c, int k ){
  int n = 0;
  if (c== ' '){
    n = k;
  } 
  return n ;
}

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s){
  int i =0;
  int comprimento = strlen(s);
  int pde =comprimento;
  char name[comprimento];
  while(s[i]== '\0'){
    pde = pe(s[i], i);
    i++;
  }
  char ult_nome[comprimento-pde];
  char nome[pde];
  for (i=pde; i=comprimento; i++){
    if (s[i]<= 'a'&&s[i]>='z'){
      s[i] -=32;
    }else if(i = comprimento){
      s[i] = ',';
    }
    ult_nome[i] = s[i];
  }
  for (i=0; i<pde; i++){
    nome[i] = s[i];
  }
  strncpy(name, ult_nome, comprimento);
  name[comprimento] = '\0';
  strcat(name, nome);

   
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
