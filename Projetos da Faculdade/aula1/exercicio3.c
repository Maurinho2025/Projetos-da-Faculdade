#include <stdio.h>
#include <locale.h>

int main() {
     setlocale(LC_ALL, "en_US.UTF-8");

    int idade = 36;
    float altura = 1.66;
    char opcao = 'M'; // 'M' deve ser exibido corretamente agora

    
    printf("Entre com sua idade e altura\n");
    scanf("%d %f", &idade, &altura);
    printf("Idade: %d\n", idade);
    printf("Altura: %f\n", altura);
    printf("Entre com a opcao");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
    
}
