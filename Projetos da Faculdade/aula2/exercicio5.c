#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // Corrigido para português brasileiro
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Verificar o saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Saldo atual:1.000.00\n");
        break;
    case 2:
       printf("Depósito realizado com sucesso\n");
       break;
    case 3:
       printf("Saque realizado com sucesso\n");
       break;
    default:
       printf("Opção invalida\n");
    }
    return 0;
}