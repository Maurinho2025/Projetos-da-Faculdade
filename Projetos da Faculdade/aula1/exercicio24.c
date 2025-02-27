#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    float temperatura, umidade; 
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Etre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
       printf("Temperatura está alta. \n");
    } else {
       printf("Temperatura está dentro dos parãmetros. \n");
    }

    if(umidade > 50){
       printf("Umidade elevada. \n");
    } else {
       printf("Umidade está dentro dos parãmetros. \n"); 
    }

  if(estoque < estoqueMinimo){
    printf("Estoque abaixo do minimo. \n");
  } else {
    printf("Estoque normal. \n");
  }
}