#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    for (int i = 1; i <= 10; i++){
         for (int j = 1; j <= 10; j++){
              printf("%d\t", i * j);
         }
          printf("\n");
    }
    return 0;
}

