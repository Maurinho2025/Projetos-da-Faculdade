#include <stdio.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "en_US.UTF-8");
   
   int option;

   do{
    printf("Menu:\n");
    printf("1. Opção 1\n");
    printf("2. Opção 2\n");
    printf("3. Sair\n");
    printf("4. Escolha uma opção:\n");
    scanf("%d", &option);
    
    switch (option){
    case 1:
      printf("Você escolheu a opção 1\n");
      break;
      case 2:
      printf("Você escolheu a opção 2\n");
      break;
      case 3:
      printf("Saindo...\n");
      break;
  default:
      printf("Opção inválida!\n");
      break;
    }

   } while (option != 3);
   
   return 0;

}