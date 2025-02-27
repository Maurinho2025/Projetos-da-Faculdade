#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
   int numero1, numero2;
   int soma, subtracao, multicacao, divisao;
  
  printf("Entre com o numero 1:");
  scanf("%d", &numero1);
  printf("Entre com o numero 2:");
  scanf("%d", &numero2);
   // operação soma
   soma = numero1 + numero2;
   // operação subtração
   subtracao = numero1 - numero2;
   // operação multiplicação
   multicacao = numero1 * numero2;
   // operação divisão
   divisao = numero1 / numero2;

   printf("A Soma é: %d\n", soma);
   printf("A Subtração é: %d\n", subtracao);
   printf("A Multiplicação é: %d\n", multicacao);
   printf("A Divisão é: %d\n", divisao);
}