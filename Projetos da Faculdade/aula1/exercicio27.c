#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    float temperatura = 25.0;

    if(temperatura > 30.0){
       printf("Está calor\n");
    } else {
      printf("Não está calor\n");
    }
}