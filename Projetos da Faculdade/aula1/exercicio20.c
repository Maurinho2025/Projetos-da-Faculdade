#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu\n", largePositiveNumber);

    return 0;
}