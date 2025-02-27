#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int numero = 4;
    if(numero % 3 == 0){
       printf("O número é par\n");
    }
    return 0;
}
