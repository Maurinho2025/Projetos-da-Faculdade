#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int numeroSinal = 3000000000;
    unsigned int numeroSemSinal = 300000000;

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %d\n", numeroSemSinal);

    return 0;
}