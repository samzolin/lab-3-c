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
  


  