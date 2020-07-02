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


/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *s){
int i,pos_ult_esp, tam_vec,aux1,aux2;
  aux1=0;
  aux2=0;
  int status=0;
  int pause=0;
  char vec_aux[256];
  strcpy(vec_aux,s);
  tam_vec=strlen(vec_aux)-1;
  
  for(i=tam_vec;vec_aux[i]!=32;i--)
  {
    
  } 
  pos_ult_esp=i+1;
  i=0;
 
  for(i=pos_ult_esp;i!=tam_vec;i++)
  {
    s[aux1]=vec_aux[i];
    aux1++;
  } 
  for(i=0;i<=aux1-1;i++)
  {
  	if(s[i]>='a' && s[i]<='z')
  	{
  		s[i]=s[i]-32;
  		
	  }
  }
  s[aux1]=',';
  aux1++;
  s[aux1]=32;
  aux1++;
  i=0;
  for(i=aux1;i!=tam_vec+1;i++)
  {
  	s[i]=vec_aux[aux2];
  	aux2++;
  }
  i=0;
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
