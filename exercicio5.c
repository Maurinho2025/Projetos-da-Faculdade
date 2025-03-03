#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    for (int i = 1; i <= 5; i++){
        printf("%d\n", i);
    }
    return 0;
}