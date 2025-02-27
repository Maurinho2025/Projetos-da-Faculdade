#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");

  int a = 7;
  int b = 2;
  int quociente = a / b;

  printf("Quociente: %d\n", quociente);

  return 0;
}