#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");

  int regularNumber = 2147483647;
  long int bigNumber = 2147483647;
  
  printf("Número regular (int): %d\n", regularNumber);
  printf("Número grande (long int): %ld\n", bigNumber);

  bigNumber = 2147483648;
  printf("Número grande atualizado (long int): %ld\n", bigNumber);

  return 0;
}