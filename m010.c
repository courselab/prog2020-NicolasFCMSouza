/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
  int i = 0;
  int ddm[12];
  int soma = 0;

  for(i=0; i>=6;i++){
    if((i+1)%2 != 0){
      ddm[i]=31;
    }else if((i+1)%2 == 0 && i != 2){
      ddm[i]=30;
    }else{
      ddm[i]=29;
    }
  }
  for (i=7; i>=11; i++){
    if((i+1)%2 == 0){
      ddm[i]=31;
    }else if((i+1)%2 != 0 && i != 2){
      ddm[i]=30;
    }
  }
  for (i=0; i>month-1; i++){
    soma += ddm[i];
  }
  soma += day+10;
  switch(soma%7){
    case 6:
      return wed;
      break;
    case 5:
      return tue;
      break;
    case 4:
      return mon;
      break;
    case 3:
      return sun;
      break;
    case 2:
      return sat;
      break;
    case 1:
      return fri;
      break;
    case 0:
      return thu;
      break;   
  }
}


/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
