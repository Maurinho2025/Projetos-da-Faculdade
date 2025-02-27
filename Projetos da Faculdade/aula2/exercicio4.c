#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "en_US.UTF-8");

   int idade, dependentes;
   float renda;

   printf("Digite a sua idade:\n");
   scanf("%d", &idade);
   printf("Digite a sua renda mensal:\n");
   scanf("%f", &renda);
   printf("Digite o número de dependentes:\n");
   scanf("%n", &dependentes);

   if(idade >= 18 && idade <= 65){
    if(renda < 3000.0) {
     if(dependentes > 2){
       printf("Voce está qualificado para os benefícios sociais\n");
      } else {
       printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à idade\n");
    }
    return 0;
  }
}