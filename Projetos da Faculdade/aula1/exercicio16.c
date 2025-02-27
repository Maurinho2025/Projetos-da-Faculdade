#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "en_US.UTF-8");

  int nota1, nota2, nota3;
  int media;

  printf("*** Programa de Cáculo de Média ***\n");
  
  printf("Digite a sua primeira nota: \n");
  scanf("%d", &nota1);
  
 printf("Digite a sua segunda nota: \n");
 scanf("%d", &nota2);

 printf("Digite a sua terceira nota: \n");
 scanf("%d", &nota3);

 media = (nota1 + nota2 + nota3) / 3;
 printf("A média é: %d", media);

 return 0;
}