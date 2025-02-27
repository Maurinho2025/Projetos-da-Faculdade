#include <stdio.h> 
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");
  
  int idade1 = 35;
  int idade2 = 30;

  if(idade1 > idade2){
     printf("Pessoa 1 é mais valha que a Pessoa 2\n");
  }
}
