#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int a = 10;
    int b = 3;
 
    float quociente = (float) a / b;

    printf("Quociente: %.2f\n", quociente);

    return 0;
}