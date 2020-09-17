//Author: Samantha Zolin saz5193@psu.edu
//Collaborator: Max Simpson mes6581@psu.edu
//Collaborator: Matthew Frabizio mjf6328@psu.edu
//Collaborator: Nathan Donahue ndd5167@psu.edu
//Section: 10
//Break out: 13
#include <stdio.h>
#include <math.h>
#include <readline/readline.h>
#include <string.h>
#include <stdlib.h>

int sum_n(int n) {
  if (n <= 1) {
    return n;
  }
  else {
    return n+sum_n(n-1);
  }
}

void print_n(const char *s, int n) {
  if (n <= 0) {
    return;
  }
  else{
    printf("%s\n", s );
    print_n(s, n-1);
  }
}

int main(void){
  int N=atoi(readline("Enter an int: "));
  printf("sum is %i.\n",sum_n(N));
  char *S=readline("Enter a string: ");
  print_n(S,N);
}


  