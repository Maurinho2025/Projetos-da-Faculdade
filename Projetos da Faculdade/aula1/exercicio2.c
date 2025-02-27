#include <stdio.h>
#include <locale.h> // Inclua esta biblioteca

int main() {
    setlocale(LC_ALL, "en_US.UTF-8"); // Define o locale para UTF-8 (ou o locale apropriado)

    int idade = 36;
    float altura = 1.66;
    char opcao = 'M'; // 'M' deve ser exibido corretamente agora
    char nome[20] = "Mauro";

    
    printf("Altura: %f\n", altura);
    printf("Opção: %c\n", opcao);
    printf("Nome: %s\n Idade: %d", nome, idade);

}