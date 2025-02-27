#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");

    int idade;

    
    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if(idade < 12) {
     printf("Você é uma criança\n");
    } else if(idade >= 12 && idade < 18) {
      printf("Você é um adolescente\n");
    } else if(idade >= 18 && idade < 60) {
      printf("Você é um adulto\n");  
    } else {
      printf("Você é um idoso\n");  
    }

    return 0;
}