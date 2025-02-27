#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "en_US.UTF-8");

    int x = 5; 
    float y = 5.0;

    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    return 0;
}
