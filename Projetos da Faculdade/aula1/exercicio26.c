#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    int numero = 11; 
    int resultado;
    
    resultado = numero % 2;

    if(resultado == 0) {
       printf("O número é par\n");
    } else {
      printf("O número é impar\n");
    }
    return 0;   
  }
