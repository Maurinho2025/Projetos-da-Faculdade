#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");
    for (int i = 100; i >= 0; i += 10){
        printf("%d\n", i);
    }
    return 0;
}