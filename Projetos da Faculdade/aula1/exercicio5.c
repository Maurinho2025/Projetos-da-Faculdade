#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");
  
  int idade; 
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Sua idade é: %d\n", idade);

  return 0;
}