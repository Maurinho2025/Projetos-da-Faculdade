#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    for (int i = 1; i <= 20; i++){
      if (i % 2 == 0){
         printf("%d\n", i);
      }
    }
    return 0;
}
