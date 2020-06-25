/* m009.c - Sort vector.

   This program reads N<=100 numbers passed as command line
   arguments and ouputs them in ascending order. Choose the
   sorting algorithm of your preference (see bellow).

   E.g.

      command line    : m009 3 2 5 4 2
      expected output : 2 2 3 4 5

   Directions:

      Please, edit function sort();
      do no not edit function main().

*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100
// sinceramente n sei direito como funciona mas peguei de um site que dizia contar o tamanho do vetor, testei e deu certo
int vec_len(int *vec){
    int c = -1;
    while(*(vec++))
        c++;
    return c;
}
/* Sort the first 'n' integers values in 'vector'. */

void sort (int* vector, int n)
{
  int contador = 0;// variavel para checar condição no for2
  int i=0; //controlador do while e do for 3(for fora do while)
  int ii = 0;// controlador do for 1 e for 3 (ambos os fors dentro do while)
  int valor = MAX;//variavel usada para receber o menor valor do vector
  int tam = vec_len(vector); // contagem do tamanho do vector usando a função vec_len
  int newvec[tam];//criando novo vetor para armazenar a ordem crescente dos valores de vector

  while(i != tam-1){
    if (valor != MAX){
      valor=MAX;
    }
    // for 1- percorre todo o vetor atrás do menor valor 
    for(ii=0; ii<tam; ii++){
      //condição que tem que ser atendida para ser o menor valor 
      if(valor >=vector[ii]){
        valor = vector[ii]; // armazena em valor o menor valor do vetor
      }
    }
    //for 2- percorrer todo vetor a procura do valor que foi pego no for 1 e atribuir um valor maior que 100 para que essa posição do vetor n seja usada de novo
    for(ii=0; ii<tam; ii++){
      //if que checa a condição do valor que foi pego no for 1 ser igual a ao valor da posição. caso for contador recebe 1 e a condição do if deixa de ser atendida
      if(valor ==vector[ii] && contador !=1){
        vector[ii]=101; //atribuição de 101 na posição do vetor que continha o menor valor 
      contador=1;//atribuição de 1 apra fazer a condição do if nao ser mais valida.
      }

    /* esse for foi criado para:
          1. para impedir que os valores exceto o menor recebam 101.
          2. para impedir que valore siguais os menores recebam 101, antes da vez dele chegar */

    } 
    contador = 0; // reiniciando o contador para ser reutilizado na estrutura a cima 
    newvec[i]=valor; 
    i++;
  }

  //for3- para passar os valores do newvector que estao em ordem crescentes dentro do vector
  for(i=0; i<tam; i++){
    vector [i] = newvec[i];
    
  }
}


#define USAGE "m009 <num1> <nun2> ... \n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int values[MAX];
  int i;

  /* Read command line arguments into vector. */
  
  for (i=1; i<argc; i++)
    values[i-1] = atoi(argv[i]);


  /* Sort vector. */
  
  sort (values, argc-1);


  /* Output sorted vector. */
  
  for (i=0; i<argc-1; i++)
    printf ("%d ", values[i]);

  printf ("\n");
  
  return 0;
}

/* Tip: check these sorting methods

   Selection sort: https://en.wikipedia.org/wiki/Selection_sort
   Bubble sort: https://en.wikipedia.org/wiki/Bubble_sort
   Insertion sort: https://en.wikipedia.org/wiki/Insertion_sort
  
 */
