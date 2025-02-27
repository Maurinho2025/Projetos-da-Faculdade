#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    int num;

    printf("Digite um número (negativo para sair): ");
    scanf("%d", &num);

    while (num >= 0) {
        printf("Você digitou: %d\n", num);
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
    printf("Número negativo detectado. Saindo...\n");

    return 0;
}