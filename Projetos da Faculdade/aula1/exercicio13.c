#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferença = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferença);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);

    return 0;
}