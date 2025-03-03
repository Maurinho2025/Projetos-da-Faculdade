#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int numero, i;

    printf("Digite um número para calcularmos a tabuada...\n");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    return 0;
}