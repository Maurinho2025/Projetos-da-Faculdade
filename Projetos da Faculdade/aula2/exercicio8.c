#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    int idade = 20;
    char * resultado;

    resultado = (idade >= 18) ? "Maior de idade": "Menor de idade";
    printf("Resultado: %s", resultado);
   
    return 0;
}