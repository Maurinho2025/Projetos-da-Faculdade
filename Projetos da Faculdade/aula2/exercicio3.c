#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int idade;
    int renda;

    printf("Digite a sua idade");
    scanf("%d", &idade);
    printf("Digite a sua renda");
    scanf("%d", &renda);

    if(idade < 18 || idade > 60){
      if(renda < 2000.0){
        printf("Você está qualificado para o desconto especial\n");
      } else {
        printf("Você não esta qualificado para o desconto devido à renda\n");
      }
    } else {
      printf("Você não está qualificado para o desconto devido à idade\n");
    }
    return 0;
}