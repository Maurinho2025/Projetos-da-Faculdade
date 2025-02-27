#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int a = 10;
    float b = 3.5;
    float resultado = a + b;

    printf("Resultado: %.2f\n", resultado);

    return 0;
}