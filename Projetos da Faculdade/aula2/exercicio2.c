#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int nota;
    printf("Digite a sua nota");
    scanf("%d", &nota);

    if(nota >= 90){
      printf("Sua nota é A\n"); 
    } else if(nota >= 80){
      printf("Sua nota é B\n");
    } else if(nota >= 70){
      printf("Sua nota é C\n");
    } else if(nota >= 60){
      printf("Sua nota é D\n");
    } else {
      printf("Sua nota é F\n");
    }
    return 0;
}